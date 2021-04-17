#include <iostream>
using namespace std;

int main() {


    /*
        运算符  
        +  加   
        -  减
        *  乘
        /  除
        %  取余   10 % 3  = 1 就是 10 除以 3 的余数为1  10 = 3 * 3 + 1（余数）
    */

   int a = 10;

   cout << (a + 10) << endl;  // 10 + 10 = 20
   cout << (a - 10) << endl;  // 10 - 10 = 0
   cout << (a * 10) << endl;  // 10 * 10 = 100
   cout << (a / 10) << endl;  // 10 / 10 = 1
   cout << (a % 10) << endl;  // 10 % 10 = 0    10 = 10 * 1 + 0
   cout << (a % 2) << endl;   // 10 % 2  = 0    10 = 2  * 5 + 0
   cout << (a % 3) << endl;   // 10 % 2  = 1    10 = 3  * 3 + 1

}