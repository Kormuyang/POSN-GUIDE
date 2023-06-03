# Camp 1 (เนื้อหาค่าย 1)
## Camp 1 - Checklist
  - programming langauges (C, C++)
  - input and output
  - shortening code
  - Mathematics
  - variable
  - operator
  - if-else condition
  - for-while loop
  - function
  - pair and tuple
  - array data structure
  - pointer address
  - iterator
<br></br>
## Input and Output
```cpp
string name;  //ประกาศตัวแปรประเภท string
cin >> name;  //รับค่าจากแป้นพิมพ์และเก็บไว้ในตัวแปรชื่อ name
cout << name; //พิมพ์ค่าที่อยู่ในตัวแปรชื่อ name
```
<br></br>
## Shortening Code
```cpp
#define ll long long //ให้ข้อความ ll แทนข้อความ long long
#define f(a, b) for(int i = a; i < b; i++) //ตัวอย่างการใช้คำสั่ง define ที่มีการรับค่าตัวแปร
```
<br></br>
## Variable
```cpp
int a; //ประกาศตัวแปรประเภท int ที่มีชื่อว่า a
```
```cpp
//คอมยุคเก่า
int           ขนาด 16 bits  เก็บค่าได้ [-2^15-1, 2^15-1]
unsigned int  ขนาด 16 bits  เก็บค่าได้ [0, 2^16-1]
long          ขนาด 32 bits  เก็บค่าได้ [-2^31-1, 2^31-1]
long long     ขนาด 64 bits  เก็บค่าได้ [-2^63-1, 2^63-1]
```
```cpp
//คอมยุคใหม่ (64-bit)
int           ขนาด 32 bits  เก็บค่าได้ [-2^31-1, 2^31-1]
long          ขนาด 32 bits  เก็บค่าได้ [-2^31-1, 2^31-1]
long long     ขนาด 64 bits  เก็บค่าได้ [-2^63-1, 2^63-1]
```
```cpp
float   เก็บทศนิยมแต่อย่าใช้เลย เพราะคลาดเคลื่อนได้ง่าย
double  เก็บทศนิยมเหมือนกันแต่นิยมใช้มากกว่า เพราะเสถียรกว่า
```
<br></br>
## Pair and Tuple
```cpp
pair<int, int> a = {5, 10}; //ประกาศ pair ประเภท <int, int> ที่มีชื่อว่า a
cout << a.first;  //พิมพ์ 5
cout << a.second; //พิมพ์ 10
```
```cpp
#include <algorithm>
pair<int, int> a[] = {{8, 9}, {1, 10}, {3, 5}, {6, 4}}; //ประกาศ array ประเภท pair<int, int> ที่มีชื่อว่า a
sort(a, a + 4); //เรียงลำดับข้อมูลในตัวแปรจากน้อยไปมาก
for(int i = 0; i < 4; i++) { cout << a[i].first  << ' '; } //พิมพ์  1 3 6 8
for(int i = 0; i < 4; i++) { cout << a[i].second << ' '; } //พิมพ์ 10 5 4 9
//คำสั่ง sort จะเรียงลำดับจากข้อมูลตัวแรกในแต่ละ pair
```
<br></br>
## Array
```cpp
int a[n]; //ประกาศ array ประเภท int ที่มีชื่อว่า a โดยมีข้อมูลทั้งหมด n ตัว
```
```cpp
int a[] = {2, 4, 6, 8, 10}; //วิธีประกาศ array อีกแบบคือประกาศข้อมูลใน array เลย
cout << a[0]; //พิมพ์ 2
cout << a[1]; //พิมพ์ 4
cout << a[4]; //พิมพ์ 10
cout << int(sizeof(a) / sizeof(a[0])); //พิมพ์ขนาดของ array
```
```cpp
#include <algorithm>
int a[1000];
fill_n(a, 1000, k); //วิธีกำหนดค่าของข้อมูลทั้งหมดใน array ให้มีค่าเท่ากับ k ตามที่ต้องการ
```
```cpp
#include <algorithm>
int a[1000][1000];
fill_n(a[0], 1000 * 1000, k); //วิธีกำหนดค่าของข้อมูลทั้งหมดใน array ให้มีค่าเท่ากับ k ตามที่ต้องการ
```
```cpp
//global variable
int a[1000];    //ค่าของข้อมูลทั้งหมดจะเริ่มต้นเท่ากับ 0
cout << a[0];   //พิมพ์ 0
cout << a[1];   //พิมพ์ 0
cout << a[547]; //พิมพ์ 0

//local variavle
int a[1000];    //ค่าของข้อมูลทั้งหมดจะถูกสุ่ม
cout << a[0];   //พิมพ์ 0
cout << a[1];   //พิมพ์ INT_MAX;
cout << a[547]; //พิมพ์ INT_MIN;
```
