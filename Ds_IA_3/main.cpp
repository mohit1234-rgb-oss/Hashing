#include <iostream>
#include <iomanip>
using namespace std;

// MIT Academy of Engineering - Internal Activity 3, Question 2
// PRN: 202501100066
// Seed S: 66
// Domain scenario: Mango varieties (integer IDs)
// Dataset: Reused from Question 1 at the student's request
// previous 12-value Q1 dataset; obtain faculty approval before submission.
// Hash table size: 31 (carried forward from Q1)
// Hash function: Division method, h(key) = key % TABLE_SIZE
// Collision handling: Linear Probing

const int TABLE_SIZE = 31;
const int DATA_SIZE = 12;

struct HashEntry {
    int key;
    bool occupied;
};

void initializeTable(HashEntry table[]) {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        table[i].key = 0;
        table[i].occupied = false;
    }
}

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

bool insertKey(HashEntry table[], int key) {
    const int homeIndex = hashFunction(key);
    cout << "Key " << setw(2) << key
         << " | home index = " << setw(2) << homeIndex
         << " | probes: ";

    for (int probe = 0; probe < TABLE_SIZE; ++probe) {
        const int index = (homeIndex + probe) % TABLE_SIZE;
        cout << index;

        if (!table[index].occupied) {
            table[index].key = key;
            table[index].occupied = true;
            cout << " -> inserted\n";
            return true;
        }

        if (table[index].key == key) {
            cout << " -> duplicate; not inserted\n";
            return false;
        }

        cout << " (occupied) -> ";
    }

    cout << "table full; insertion failed\n";
    return false;
}

void displayTable(const HashEntry table[]) {
    cout << "\nFINAL HASH TABLE\n";
    cout << "Index\tValue\n";
    cout << "----------------\n";

    for (int i = 0; i < TABLE_SIZE; ++i) {
        cout << i << "\t";
        if (table[i].occupied) {
            cout << table[i].key;
        } else {
            cout << "EMPTY";
        }
        cout << '\n';
    }
}

int main() {
    const int data[DATA_SIZE] = {
        11, 77, 46, 15, 81, 50,
        19, 85, 54, 23, 89, 58
    };

    HashEntry table[TABLE_SIZE];
    initializeTable(table);

    cout << "IA 3 - QUESTION 2: HASH TABLE USING LINEAR PROBING\n";
    cout << "PRN: 202501100066\n";
    cout << "Domain: Mango variety IDs\n";
    cout << "Number of values used: " << DATA_SIZE << '\n';
    cout << "Hash function: key % " << TABLE_SIZE << '\n';
    cout << "Collision handling: Linear Probing\n\n";

    int insertedCount = 0;
    for (int i = 0; i < DATA_SIZE; ++i) {
        if (insertKey(table, data[i])) {
            ++insertedCount;
        }
    }

    cout << "\nSuccessfully inserted: " << insertedCount
         << " out of " << DATA_SIZE << " values\n";
    displayTable(table);
    return 0;
}

