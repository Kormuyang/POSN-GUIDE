# Camp 1 (เนื้อหาค่าย 1)
## Camp 1 - Checklist
  - programming langauges (C, C++)
  - input and output
  - shortening code
  - Mathematics
  - variable
  - operator
  - if else condition
  - for while loop
  - function
  - array data structure
  - pointer address
  - iterator
## input and output
```cpp
string name; //ประกาศตัวแปรประเภท string
cin >> name; //รับค่าจากแป้นพิมพ์และเก็บไว้ในตัวแปรชื่อ name
cout << name; //พิมพ์ค่าที่อยู่ในตัวแปรชื่อ name
```
## shortening code
```cpp
#define ll long long //ให้ข้อความ ll แทนข้อความ long long
#define f(a, b) for(int i=a; i<b; i++) //ตัวอย่างการใช้คำสั่ง define ที่มีการรับค่าตัวแปร
```
## variable
```cpp
int a; //ประกาศตัวแปรประเภท int ที่มีชื่อว่า a
```
```cpp
int           ขนาด 16 bits  เก็บค่าได้ [-2^15-1, 2^15-1]
unsigned int  ขนาด 16 bits  เก็บค่าได้ [0, 2^16-1]
long          ขนาด 32 bits  เก็บค่าได้ [-2^31-1, 2^31-1]
long long     ขนาด 64 bits  เก็บค่าได้ [-2^63-1, 2^63-1]
```
```cpp
float   เก็บทศนิยมแต่อย่าใช้เลยเพราะคลาดเคลื่อนได้ง่าย
double  เก็บทศนิยมเหมือนกันแต่นิยมใช้มากกว่าเพราะเสถียรกว่า
```
## array
```cpp
int a[n]; //ประกาศ array ประเภท int ที่มีชื่อว่า a โดยมีข้อมูลทั้งหมด n ตัว
```
```cpp
int a[] = {2, 4, 6, 8, 10}; //วิธีประกาศ array อีกแบบคือประกาศข้อมูลใน array เลย
cout << a[0]; //พิมพ์ 2
cout << a[1]; //พิมพ์ 4
cout << a[4]; //พิมพ์ 10
cout << sizeof(a)/sizeof(a[0]); //พิมพ์ขนาดของ array
```
```cpp
#include <mem.h>
int a[1000];
memset(a, k, sizeof(a)); //วิธีกำหนดค่าของข้อมูลทั้งหมดใน array ให้มีค่าเท่ากับ k ตามที่ต้องการ
//โดยในทางทฤษฎีแล้ว การใช้ memset จะเร็วกว่าการใช้ for loop กำหนดค่าทีละตัว
```
```cpp
//global variable
int a[1000]; //ค่าของข้อมูลทั้งหมดจะเริ่มต้นเท่ากับ 0
cout << a[0]; //พิมพ์ 0
cout << a[1]; //พิมพ์ 0
cout << a[547]; //พิมพ์ 0

//local variavle
int a[1000]; //ค่าของข้อมูลทั้งหมดจะถูกสุ่ม
cout << a[0]; //พิมพ์ 0
cout << a[1]; //พิมพ์ INT_MAX;
cout << a[547]; //พิมพ์ INT_MIN;
```
