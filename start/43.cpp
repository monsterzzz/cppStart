#include <iostream>
using namespace std;

/*

    静态成员方法

    1. 所有对象共享一个成员函数
    2. 只能访问静态成员变量

*/

class Person1 {
   public:
    static int id;
    int age;

    static void func1() {
        // cout << age << endl;  // 错误，这里访问了非静态成员变量,
        // 因为所有对象共享一个成员函数，这个函数访问的age不知道是哪个对象的age
        cout << id << endl;
    }
};

// 静态成员函数需要类内声明，类外赋值
int Person1::id = 150;

int main() {
    // 静态成员方法调用方式

    // 1. 通过 :: 调用
    Person1::func1();

    // 2. 创建对象调用
    Person1 p1;
    p1.func1();
}