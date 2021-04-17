#include <iostream>
using namespace std;

int main() {
    /*
    1. int类型为整数 比如 10,20,30
    2. string类型为字符串  用  "" 包裹的字符 比如 "你好","hello"
    3. float 类型为小数 比如 1.1
    */

    int a;     // 声明 int类型变量 a
    string b;  // 声明 string类型变量 b
    float c;   // 声明 float类型变量 c

    a = 10;             // 变量a 初始化为 10;
    b = "hello world";  // 变量b 初始化为 "hello world";
    c = 1.1;            // 变量c 初始化为 1.1;

    printf("%d\n", a);  // 格式化打印 int类型为 %d
    printf("%s\n", b);  // 格式化打印 string类型为 %s
    printf("%f\n", c);  // 格式化打印 float类型为 %f

    /*
    变量可以修改值
    */

    a = 30;     // a修改为 30
    b = "123";  // b修改为 123
    c = 2.568;  // c修改为 2.568

    printf("%d\n", a);  // 格式化打印 int类型为 %d
    printf("%s\n", b);  // 格式化打印 string类型为 %s
    printf("%f\n", c);  // 格式化打印 float类型为 %f

    int d;
    d = 80;

    a = d;              // a 修改为 d 的值
    printf("%d\n", a);  // 格式化打印 int类型为 %d

    //  a = b;  错误！ a为int类型  b为string类型 不可以直接赋值

    return 0;
}