
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

int hashFunction(int key) {
    return key % TABLE_SIZE;
}

int main() {
    cout << "MITAOE - Data Structures IA3" << endl;
    cout << "PRN: 202501100066" << endl;

    cout << "\nKey\tHome Index" << endl;

    for (int i = 0; i < DATA_SIZE; i++) {
        cout << data[i] << "\t"
             << hashFunction(data[i]) << endl;
    }

    return 0;
}

