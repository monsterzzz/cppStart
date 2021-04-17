#include <iostream>
using namespace std;

int main() {
    // sizeof() 计算 数据类型或者变量所占用的内存空间大小 单位为字节

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(short));
    printf("%d\n", sizeof(long));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(string));
    printf("%d\n", sizeof(float));

    int a = 1;
    int b = 100000000000000000;
    int c = 1000;

    string s1 = "123";
    string s2 = "hello world";
    string s3 = "hello worlddddddddddddddddddddddddddddddddddd";

    printf("%d\n", sizeof(s1));
    printf("%d\n", sizeof(s2));
    printf("%d\n", sizeof(s3));
}