# Camp 2 (เนื้อหาค่าย 2)
## Camp 2 - Checklist
  - competition environment
  - big O notation - O(N), O(NlogN)
  - sorting - bubble sort, quick sort
  - binary search - lower_bound, upper_bound
  - linked list
  - vector - dynamic array
  - stack
  - queue and deque - sliding window
  - hashing - unordered_set, unordered_map
  - tree - level order traversal
  - binary search tree - set, map
  - heap - priority_queue
  - graph theory - single shortest path
  - BFS and DFS - floodfill problem
  - brute force
  - rescursion
  - divide and conquer - merge sort
  - backtracking - maze
  - greedy algorithm - job sequencing problem
  - dynamic programming - knapsack problem
  - sweep line
## competition environment
  ```cpp
  #include <bits/stdc++.h>
  ```
  header ครอบจักรวาล รวบรวม library ไว้แทบทุกอย่างที่จะนึกออกได้
  ```cpp
  ios::sync_with_stdio(false);
  cin.tie(false);
  ```
  โค้ด 2 บรรทัดนี้ จะทำให้โปรแกรมทำงานได้เร็วขึ้น โดยการลดระยะเวลาที่ใช้ในคำสั่ง cin และ cout
## big O notation
ฟังก์ชัน O(K) แทน ขอบบนของระยะเวลาที่ฟังก์ชันนั้นใช้ในการทำงาน ใช้ในการคำนวณหา time complexity
```cpp
int sum = 0;
for(int i=0; i<N; i++) {
  sum = sum + 1;
}
```
จากตัวอย่างโค้ดข้างบน ฟังก์ชันดังกล่าวมี time complexity เท่ากับ O(N) เมื่อ N แทน จำนวนของ input
```cpp
int sum = 0;
for(int i=0; i<N; i++) {
  for(int j=0; j<N; j++) {
    sum = sum + 1;
  }
}
```
จากตัวอย่างโค้ดข้างบน ฟังก์ชันดังกล่าวมี time complexity เท่ากับ O(N^2) เมื่อ N แทน จำนวนของ input
