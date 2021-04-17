#include <iostream>
using namespace std;

int main() {
    /*
        打印 99乘法表
        1. 先试着打印 1 - 9

    */

    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < i + 1; j++) {
            cout << j << "*" << i << "=" << i * j << "\t";
        }
        cout << endl;
    }
}