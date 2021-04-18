#include <iostream>
using namespace std;

/*

    成员函数与成员变量分开储存


*/

class P1 {};
class P2 {
   public:
    int id;
};
class P3 {
   public:
    static int id;
};

class P4 {
   public:
    void func() { cout << "hello world" << endl; }
};

class P5 {
   public:
    static void func() { cout << "hello world" << endl; }
};

int main() {
    // 空对象占一个字节，因为每个对象都需要有一个独一无二的地址
    P1 p1;
    cout << sizeof(p1) << endl;  // 1

    // 成员变量绑定在对象上
    P2 p2;
    cout << sizeof(p2) << endl;  // 4

    // 静态成员变量不在对象上，属于全局区
    // 对象属于栈区
    P3 p3;
    cout << sizeof(p3) << endl;  // 1

    // 非静态方法不在对象上
    P4 p4;
    cout << sizeof(p4) << endl;  // 1

    // 静态方法不在对象上
    P5 p5;
    cout << sizeof(p5) << endl;  // 1
}