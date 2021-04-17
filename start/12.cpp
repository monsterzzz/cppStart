#include <iostream>
using namespace std;

int main() {
    /*
    循环


    当括号中的条件为假时，循环结束，否则一直执行
    while(){

    }

    当括号中的条件为假时，循环结束，否则一直执行
    do{

    }while()

    区别:  while 是先判断再执行，do while是先执行再判断,至少会运行一次

    for(){


    }

    */

    cout << "-----while------" << endl;
    // 打印 0-9的数字
    int a = 0;
    while (a < 10) {        // 当 a < 10 的时候
        cout << a << endl;  // 打印 a
        a++;                // a + 1
    }

    cout << "-----do while------" << endl;
    // 先执行一遍，然后再判断
    int b = 0;
    do {
        cout << b << endl;
        b++;
    } while (b < 1);  // 现在 b == 1 所以不再继续执行

    cout << "-----for------" << endl;
    for (int c = 0; c < 10; c++) {
        // 先初始化 c = 0
        // 然后判断 c < 10 ?
        // 如果 为真 则退出循环
        //     为假 则执行 c++

        cout << c << endl;
    }
}