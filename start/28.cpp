#include <iostream>
using namespace std;

int H = 150;  // 全局变量

int print(int a) {
    // a为函数参数值 存放在栈区
    return 0;
}

int main() {
    // 内存模型

    //全局区,存放全局变量,静态变量,常量
    const int b = 10;   // 常量 全局区
    static int c = 20;  // 静态变量

    int d = 30;  //栈区,存放局部变量,函数参数值,编译器自动释放

    // 堆区,由程序员手动控制内存的创建和释放,如果不释放,将在程序结束时由操作系统释放
    int* a = new int(120);

    delete a;  // 释放内存
    delete a;  // 错误! 重复释放内存了
}
