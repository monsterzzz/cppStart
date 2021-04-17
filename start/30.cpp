#include <iostream>
using namespace std;

// 引用做函数参数
int print(int& b) {
    cout << &b << ": " << b << endl;
    return 0;
}

// 地址传递
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// 引用传递,可以简化指针
void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << &a << ": " << a << endl;
    print(a);  // 使用引用做函数参数值, 函数参数值就是实参的别名.
               // 从地址上也可以看出,内存地址都是一样,并没有创建一个新的副本,

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(&a, &b);  // 地址传递,交换a,b的值
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    swap(a, b);  // 引用传递,交换a,b的值
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    // cout
}