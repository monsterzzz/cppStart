#include <iostream>
using namespace std;

/*

    静态成员变量

    1. 所有对象共享一份内存
    2. 在编译阶段就分配内存
    3. 类内声明，类外初始化

*/

class Person1 {
   public:
    static int id;
};

class Person2 {
   public:
    int id;
};

// 类内声明，类外初始化
int Person1::id = 200;

int main() {
    Person2 p2;
    cout << p2.id << endl;  // 0

    Person1 p1;
    // cout << p1.id << endl;  // 错误
    cout << p1.id << endl; 

    Person1 p3;
    cout << p3.id << endl; // 200
    p3.id = 100;

    cout << p1.id << endl; // 100
}