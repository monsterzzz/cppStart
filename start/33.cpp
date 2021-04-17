#include <iostream>
using namespace std;

void tmp1(int a = 10, int b = 20) {
    cout << a + b << endl;
}

// 重载，但是这样有二义性，编译器不知道我们要使用哪个
// void tmp1(int a, int b = 30) {
//     cout << a + b << endl;
// }

void tmp1(double a = 10.0, int b = 20) {
    cout << a + b << endl;
}

int main() {
    // 函数默认参数
    // tmp1();       // 默认为10,20
    tmp1(5);      // 只可以设定第一个
    tmp1(1, 30);  // 可以更改
    tmp1(1.0, 11);
}