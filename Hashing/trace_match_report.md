Trace-Match Report – Personalized Hash Table

Institute: MIT Academy of Engineering (MITAOE)
Subject: Data Structures
Assignment: Internal Activity 3 – Question 2
Student PRN: 202501100066

1. Personalization Details

- PRN: 202501100066
- Dataset: 11, 77, 46, 15, 81, 50, 19, 85, 54, 23, 89, 58
- Dataset source: Reused from Question 1
- Hash table size: 31
- Hash function: Division method
- Hash function formula: "h(key) = key % 31"
- Collision resolution: Linear probing
- Programming language: C++

Note: This implementation uses the 12-value dataset from Question 1, as requested for this project workflow. The Q2 instructions specify a 20-value PRN-derived dataset. This difference should be confirmed with the faculty before final submission. Table size 31 is also carried over from Question 1.

2. Hand-Predicted Table State (Before Execution)

The hash function is:

"h(key) = key % 31"

When a collision occurs, linear probing checks the next available index.

Key| Initial Hash Index| Final Index
11| 11| 11
77| 15| 15
46| 15| 16
15| 15| 17
81| 19| 19
50| 19| 20
19| 19| 21
85| 23| 23
54| 23| 24
23| 23| 25
89| 27| 27
58| 27| 28

Predicted Final Hash Table

Index| Expected Value
11| 11
15| 77
16| 46
17| 15
19| 81
20| 50
21| 19
23| 85
24| 54
25| 23
27| 89
28| 58

All other indices from 0 to 30 are expected to be EMPTY.

3. Actual Program Execution

The program was compiled using:

"g++ main.cpp -o main"

It was executed using:

"./main"

Actual Console Output

MITAOE - Data Structures IA3
PRN: 202501100066
Hash Function: key % 31
Collision Handling: Linear Probing

Inserting Personalized Dataset:
Inserted 11 at index 11
Inserted 77 at index 15
Inserted 46 at index 16
Inserted 15 at index 17
Inserted 81 at index 19
Inserted 50 at index 20
Inserted 19 at index 21
Inserted 85 at index 23
Inserted 54 at index 24
Inserted 23 at index 25
Inserted 89 at index 27
Inserted 58 at index 28

Final Hash Table
------------------------
Index   Value
0       EMPTY
1       EMPTY
2       EMPTY
3       EMPTY
4       EMPTY
5       EMPTY
6       EMPTY
7       EMPTY
8       EMPTY
9       EMPTY
10      EMPTY
11      11
12      EMPTY
13      EMPTY
14      EMPTY
15      77
16      46
17      15
18      EMPTY
19      81
20      50
21      19
22      EMPTY
23      85
24      54
25      23
26      EMPTY
27      89
28      58
29      EMPTY
30      EMPTY

4. Trace-Match Comparison

The hand-predicted table was compared with the actual output produced by the C++ program.

- All 12 keys were inserted successfully.
- All occupied indices matched the predicted positions.
- All remaining positions were displayed as EMPTY.
- Linear probing correctly resolved collisions.
- No mismatch was observed between the predicted and actual table.

5. Conclusion

The execution result matches the hand-predicted hash table state. The division method and linear probing implementation produced the expected placements for all 12 input keys. Therefore, the program behaved as expected for the tested dataset.

No mismatch was observed in this execution.
