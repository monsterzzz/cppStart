#include <iostream>
using namespace std;

// 引用做函数返回值

int& tmp1() {
    int a = 10;  //局部变量,存放在栈区
    return a;    // 返回引用
    // 栈区内的变量在何时释放我们不知道,不要使用这种方法
}

int& tmp2() {
    static int a = 20;
    return a;  //静态变量,存放在全局区.程序结束之后才会由操作系统回收
}

int main() {
    // cout << tmp1() << endl;
    // cout << tmp1() << endl;

    cout << &tmp2() << endl;
    cout << tmp2() << endl;
    tmp2() = 1000;
    cout << tmp2() << endl;
    cout << tmp2() << endl;
}