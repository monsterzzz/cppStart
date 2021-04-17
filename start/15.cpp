#include <iostream>
using namespace std;

int main() {
    /*
        找出 100-1000 内的水仙花数
        水仙花数是指 一个三位数 它的每个位上的数字的3次方的和等于它本身
        例如 1^3 + 5^3 + 3^3 = 153
    */

    /*

    1. 声明一个起始值，这里是100
    2. 开启循环验证
    3. 获得每个位置上的数字。比如现在是100，就是要获得 1，0，0
    4. 思考一下，如何获得？
    5. 个位上的数字可以直接取模 153 % 10  = 3
    6. 十位上的数字可以    153 / 10 = 15  15 % 10 = 5
    7. 百位上的数字可以    153 / 100 = 1


    */

    int num = 100;

    int ge;
    int shi;
    int bai;

    // for
    for (; num < 1000; num++) {
        ge = num % 10;
        shi = (num / 10) % 10;
        bai = num / 100;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num) {
            cout << num << endl;
        }
    }  // 153 370 371 407

    num = 100;
    // while
    while (num < 1000) {
        ge = num % 10;
        shi = (num / 10) % 10;
        bai = num / 100;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num) {
            cout << num << endl;
        }
        num++;
    }

    num = 100;
    // do while
    do {
        ge = num % 10;
        shi = (num / 10) % 10;
        bai = num / 100;
        if (ge * ge * ge + shi * shi * shi + bai * bai * bai == num) {
            cout << num << endl;
        }
        num++;
    } while (num < 1000);
}