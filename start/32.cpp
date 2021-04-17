#include <iostream>
using namespace std;

int main() {
    // 引用的本质就是一个指针常量
    // 指向的地址不可以变,指向的值可以变

    int a = 10;
    int& b = a;  // int* const b = &a;
    b = 20;      //  *b = 20;

    // 和指针类似，可以在函数参数上加const防止修改
}