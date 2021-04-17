#include <iostream>
using namespace std;

int main() {
    /*
        字符型 char

    */

    char s = 'a';  // 只能用单引号
    char s1 = 97;
    // char s = "1" 错误！
    // char s = "123" 错误！ 只能单个字符

    printf("%d\n", sizeof(s)); 

    printf("%d\n", s);  // 结果为97 97为a对应的ASCII字符对应编码
    printf("%c\n", s);  // 结果为 a
    printf("%c", s1);   // 结果为 a
    return 0;
}
