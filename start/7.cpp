#include <iostream>
using namespace std;

int main() {

    /*

    0 为 假
    1 为 真

        比较运算符
        <  大于
        >   小于
        <=  小于等于
        >=  大于等于
        ==  等于
        !=  不等于
    */

    int a = 10;
    cout << (true) << endl;   // 1
    cout << (false) << endl;  // 0
    cout << (a < 10) << endl;   // 0  a小于10 为假  所以为 false 所以为 0
    cout << (a > 10) << endl;  //  0
    cout << (a == 10) << endl;  // 1
    cout << (a <= 10) << endl; // 1
    cout << (a >= 10) << endl; // 1
    cout << (a != 10) << endl; // 0
    
}