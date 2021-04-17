#include <iostream>
using namespace std;

/*
  函数可以有多种形式
  1. 无返回值无参数
  void function();
  2. 有返回值无参数;
  int function();
  3. 有返回值有参数;
  int function(int a);
  4. 无返回值有参数；
  void funciton();
  5。可以有多个参数;
  void function(int a, int b, int c)
*/

int arrSum(int arr[], int size) {  // 这里叫形参

    int result = 0;
    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    return result;
}

void swap(int a, int b) {
    // 值传递: 形参的改变不会影响实参
    int tmp;
    tmp = a;
    a = b;
    b = tmp;

    cout << "函数交换后:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int main() {
    /*

    函数

    函数的目的是为了减少重复，
    当我们出现很多重复的代码时，可以使用函数来减少重复
    main()函数一个文件只能有一个，头文件不能有main函数

    由于代码是从上往下执行的，所以我们定义函数要定义在main函数之前
    但是我们可以实现函数在main函数之后,函数只能实现一次！
    */

    /*

    例如,我们要计算一个数组中所有数字的和

    */

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << arrSum(a, sizeof(a) / sizeof(a[0])) << endl;

    int b = 20;
    int c = 10;

    cout << "调用函数前:" << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    swap(b, c);  // 这里叫实参
    cout << "调用函数后:" << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
}