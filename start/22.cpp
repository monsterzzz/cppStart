#include <iostream>
using namespace std;

void swap(int a, int b) {
    // 值传递
    // 核心原理就是 重新在内存空间中开辟了两个空间保存形参a和形参b
    // 然后将实参放入a和b中
    cout << "形参地址: " << endl;
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;

    cout << "形参交换前: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    int tmp = a;
    a = b;
    b = tmp;
    cout << "形参交换后: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

void swap(int* a, int* b) {
    // 这里传过来的是地址，即使你认为是值传递，这里传递过来的也是地址
    // 然后通过 * 操作符 可以访问和修改地址里面的值
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    /*

      指针和函数
      1. 值传递
      2. 地址传递 (数组永远都是地址传递)
  */

    int a = 10;
    int b = 20;

    cout << "实参地址: " << endl;
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;
    cout << "实参交换前: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(a, b);
    cout << "实参交换后: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    /*
    实参地址:
    a: 0x61fe1c
    b: 0x61fe18
    形参地址:
    a: 0x61fdf0
    b: 0x61fdf8
    */

    // 说明这里是值传递

    // 2. 地址传递

    cout << "实参交换前: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(&a, &b);
    cout << "实参交换后: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}