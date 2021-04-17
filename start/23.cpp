#include <iostream>
using namespace std;

void bubbkeSort(int* arr, int len) {
    int tmp;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] > arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void arrPrint(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    /*

   练习: 利用指针和数组和函数来实现冒泡排序

   */

    int a[6] = {8, 6, 44, 35, 98, 15};
    arrPrint(a, 6);
    bubbkeSort(a, 6);
    arrPrint(a, 6);
}