#include <iostream>
using namespace std;

int main() {
    /*

    指针和数组

    数组之前已经说过，保存在一段连续的内存空间中

    */

    // 查看数组中所有元素的内存地址
    int a[5] = {1, 2, 3, 4, 5};
    cout << &a << endl;
    for (int i = 0; i < 5; i++) {
        cout << &a[i] << " ";
    }
    cout << endl;  // 0x61fe00 0x61fe04 0x61fe08 0x61fe0c 0x61fe10

    // 现在可以利用指针来访问数组中的元素
    // 只需要指针++

    int* p1 = &a[0];  // 获得数组首地址
    // 现在查看当前地址的数据
    cout << *p1 << endl;  // 1
    p1++;  // 指针++ 就是把指针的指向从当前地址修改为当前地址的下一个地址
    cout << *p1 << endl;  // 2

    cout << "-----------------" << endl;
    p1 = &a[0];  // 获得数组首地址
    for (int i = 0; i < 5; i++) {
        cout << *p1 << endl;
        p1++;
    }

}