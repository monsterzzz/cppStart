#include <iostream>
using namespace std;

#define H 12;
#define W 12;

int main() {
    /*
    常量：
        不可修改的值，一旦定义了就不会变动。比如说一年有12个月份是永远不会变的
        变量名 一般设置为 大写
    常量定义的方式
        1.  #define 常量名 常量值      #define H 12 常量H的值为12
        2.  const 变量类型 变量名 = 变量值  const int A = 10;
    */

    const int A = 10;

    // A = 50; 错误! 程序无法编译通过,因为 A是一个常量
    // H = 88; 错误! 程序无法编译通过,因为 H是一个常量
    cout << "H" << endl;
    // printf("%d", H);
    printf("%d", A);
    return 0;
}
