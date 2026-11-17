#include <iostream>
using namespace std;

// IA 3 Q2 - PRN: 202501100066
// Dataset intentionally reused from Question 1 as requested.
const int TABLE_SIZE = 31;
const int DATA_SIZE = 12;

int main() {
    int data[DATA_SIZE] = {
        11, 77, 46, 15, 81, 50,
        19, 85, 54, 23, 89, 58
    };

    cout << "IA 3 - Question 2: Hash Table Project\n";
    cout << "PRN: 202501100066\n";
    cout << "Reused Q1 dataset: ";
    for (int i = 0; i < DATA_SIZE; ++i) {
        cout << data[i] << (i + 1 == DATA_SIZE ? '\n' : ' ');
    }
    return 0;
}


