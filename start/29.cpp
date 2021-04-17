#include <iostream>
using namespace std;

int main() {
    // 引用

    // 引用就是为变量取一个别名

    // 引用必须要初始化!
    // int &b; error!

    // 引用不可以更改!
    // int a = 10;
    // int b = 20;
    // int &c = a; c为a的别名
    // c = b; 赋值操作,不是更改引用

    int a = 10;
    int c = 20;
    int& b = a;

    cout << &a << ": " << a << endl;  // a和b是相同的地址 相同的值
    cout << &b << ": " << b << endl;

    b = 30;  // a 和 b 将会同时被修改

    cout << &a << ": " << a << endl;  // a和b是相同的地址 相同的值
    cout << &b << ": " << b << endl;
}