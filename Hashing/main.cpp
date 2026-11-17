
/*
    MITAOE - Data Structures IA3
    Project: Personalized Hash Table
    Student PRN: 202501100066
    Dataset: Reused from Question 1
*/

#include <iostream>
using namespace std;

const int TABLE_SIZE = 31;
const int DATA_SIZE = 12;

int data[DATA_SIZE] = {
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

void insertLinearProbing(int key) {
    int index = hashFunction(key);
    int startIndex = index;

    while (table[index] != -1) {
        index = (index + 1) % TABLE_SIZE;

        if (index == startIndex) {
            cout << "Hash table is full!" << endl;
            return;
        }
    }

    table[index] = key;
}

void displayTable() {
    cout << "\nIndex\tValue" << endl;

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

    for (int i = 0; i < DATA_SIZE; i++) {
        insertLinearProbing(data[i]);
    }

    cout << "Hash Table using Linear Probing";
    displayTable();

    return 0;
}

