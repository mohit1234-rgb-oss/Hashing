
# MITAOE - Data Structures IA3
## Development and Debugging Log

PRN: 202501100066
Project: Personalized Hash Table

### Commit 1: Initialize Hash Table Project
Created the initial C++ project and added the project heading and PRN. Compiled and executed the program to verify the initial setup.

### Commit 2: Add Personalized Dataset
Added the personalized dataset reused from Question 1:
11, 77, 46, 15, 81, 50, 19, 85, 54, 23, 89, 58.
Verified that the dataset was displayed correctly.

### Commit 3: Implement Division Hash Function
Implemented the division method using hash(key) = key % 31. Tested the home positions of the dataset and identified keys that produced the same hash index.

### Commit 4: Initial Insertion Without Collision Handling
Initially implemented direct insertion at the calculated home index. This approach caused collisions because multiple keys could map to the same position. The insertion approach needed improvement to avoid overwriting existing keys.

### Commit 5: Implement Linear Probing
Introduced linear probing to resolve collisions. When a position was occupied, the program searched the next available position.

### Commit 6: Complete Hash Table Validation and Display
Improved the program by adding duplicate detection, full-table handling, wrap-around probing and final table display. The final implementation was checked against the expected positions.

## Conclusion
The development process progressed from basic insertion to collision handling using linear probing. The initial direct insertion approach demonstrated why collision resolution is necessary in hash table implementation.
