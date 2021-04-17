#include <ctime>
#include <iostream>
using namespace std;

int main() {
    /*
        编写一个猜数字游戏

        生成一个随机整数
        然后接受键盘输入
        如果猜中则结束
        如果输入的数字比随机数小，则输出 小了 并且继续接受输入 直到猜中为止
        如果输入的数字比随机数大，则输出 大了 并且继续接受输入 直带猜中为止

    */

    // 1. 指定一个随机数种子
    int seed = time(0);
    srand(seed);
    int random = rand() % 101;
    int recive;

    do {
        cout << "输入一个数字:" << endl;
        cin >> recive;
        if (recive > random) {
            cout << "大了" << endl;
        } else if (recive < random) {
            cout << "小了" << endl;
        }
    } while (recive != random);  // do while

    while (1) {  // while(1)
                 // 说明这是一个死循环，如果循环体内没有结束条件，则永远运行
        cout << "输入一个数字:" << endl;
        cin >> recive;
        if (recive > random) {
            cout << "大了" << endl;
        } else if (recive < random) {
            cout << "小了" << endl;
        } else {    // 结束条件
            break;  // break 可以结束当前循环
        }
    }
}