#include <ctime>
#include <iostream>
using namespace std;

int main() {
    /*
        rand() 默认 产生 随机数种子为1 的随机数 随机数范围为 [seed,RAND_MAX)
        srand( int seed) 可以使用这个语句指定随机数种子

        rand() 默认就是使用 srand(1)


        如果seed为一个定值，那么每次产生的随机数都相同

    */

    cout << "no seed (seed = 1)" << endl;
    for (int i = 0; i < 3; i++) {
        cout << rand() << endl;
    }  // 每次运行程序的随机值都一样

    cout << "seed = 10" << endl;
    srand(10);
    for (int i = 0; i < 3; i++) {
        cout << rand() << endl;
    }  // 每次运行程序的随机值都一样

    cout << "seed = time" << endl;
    cout << "time:" << time(0) << endl;
    srand(time(0));
    for (int i = 0; i < 3; i++) {
        cout << rand() << endl;
    }  // 每次运行程序的随机值不一样

    // 产生一个[0,5]的随机数
    cout << "seed = time" << endl;
    srand((unsigned)time(0));
    for (int i = 0; i < 3; i++) {
        cout << rand() % 6 << endl;
    }

    // 产生一个[0,1]的随机小数
    cout << "seed = time" << endl;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 20; i++) {
        cout << "RAND():" << rand() << "----RAND_MAX:" << (double)RAND_MAX
             << endl;
        cout << rand() / (double)RAND_MAX << endl;
    }

    // cout << "seed = time" << endl;
    // cout << (unsigned)time(NULL) << endl;
    // srand((unsigned)time(NULL));
    // for (int i = 0; i < 10; i++) {
    //     cout << "RAND():" << rand() << "----RAND_MAX:" << (double)RAND_MAX
    //          << endl;
    //     // cout << rand() / (double)RAND_MAX << endl;
    // }
}