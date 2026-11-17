
/*
    MITAOE - Data Structures IA3
    Project: Personalized Hash Table
    Student PRN: 202501100066

    Dataset reused from Question 1:
    11, 77, 46, 15, 81, 50,
    19, 85, 54, 23, 89, 58

    Table Size: 31
    Hash Function: Division Method
    Collision Handling: Linear Probing
*/

#include <iostream>
using namespace std;

const int TABLE_SIZE = 31;
const int DATA_SIZE = 12;

int keys[DATA_SIZE] = {
    11, 77, 46, 15, 81, 50,
    19, 85, 54, 23, 89, 58
};

int table[TABLE_SIZE];

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

void initializeTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        table[i] = -1;
    }
}

void insertKey(int key) {
    int index = hashFunction(key);
    int startIndex = index;

    do {
        if (table[index] == key) {
            cout << key << " is already present."
                 << endl;
            return;
        }

        if (table[index] == -1) {
            table[index] = key;
            cout << "Inserted " << key
                 << " at index " << index << endl;
            return;
        }

        index = (index + 1) % TABLE_SIZE;

    } while (index != startIndex);

    cout << "Hash table is full. Cannot insert "
         << key << endl;
}

void displayTable() {
    cout << "\nFinal Hash Table" << endl;
    cout << "------------------------" << endl;
    cout << "Index\tValue" << endl;

    for (int i = 0; i < TABLE_SIZE; i++) {
        cout << i << "\t";

        if (table[i] == -1)
            cout << "EMPTY";
        else
            cout << table[i];

        cout << endl;
    }
}

int main() {
    initializeTable();

    cout << "MITAOE - Data Structures IA3" << endl;
    cout << "PRN: 202501100066" << endl;
    cout << "Hash Function: key % 31" << endl;
    cout << "Collision Handling: Linear Probing"
         << endl;

    cout << "\nInserting Personalized Dataset:"
         << endl;

    for (int i = 0; i < DATA_SIZE; i++) {
        insertKey(keys[i]);
    }

    displayTable();

    return 0;
}

