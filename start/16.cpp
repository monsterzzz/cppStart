#include <iostream>
using namespace std;

int main() {
    /*

    数组

    1. 存放的都是相同的数据类型
    2. 连续的内存位置
    3. 一般来说 数组长度是固定的，但是可以通过其他方法来改变数组长度

    */

    // 定义方式

    // 1. 通过下标访问赋值
    int a1[3];
    a1[0] = 1;
    a1[1] = 2;
    a1[2] = 3;

    // 2. 声明长度，直接赋值
    int a2[3] = {1, 2, 3};

    // 3. 直接赋值，自动计算长度
    int a3[] = {1, 2, 3};

    // 检查内存位置
    for (int i = 0; i < 3; i++) {
        cout << &a1[i] << " ";  // 0x61fe10 0x61fe14 0x61fe18  int类型的长度为4
                                // 每次重新运行的时候，内存地址都会改变
                                // sizeof(int) = 4
    }
    cout << endl;

    // 获取数组长度
    /*
        1.获取整个数组的长度  lengthAll
        2.获取单个元素的长度  lengthItem
        3. lengthAll / lengthItem
    */

    int lengthAll = sizeof(a1);
    int lengthItem = sizeof(a1[0]);
    cout << "数组长度为: " << lengthAll / lengthItem << endl;

    /*

    练习:  五只小猪称体重
    一个数组中纪录了 5 个小猪的体重，请找出最重的小猪体重
        int arr[5] = {152,265,104,96,35}

    思考: 如何找出最重?
    1. 对每个元素进行比较
    2. 如何对每个元素进行比较？ 使用循环

    */

    int arr[5] = {152, 265, 104, 96, 35};
    int max = arr[0];
    for (int i = 1; i < sizeof(arr) / sizeof(arr[0]); i++) {
        // cout << i << endl;  通过数组下标进行访问数组 比如 a[0] = 152
        if (max < arr[i]) {
            max = arr[i];
        };
    }
    cout << "最重的小猪体重为:" << max << endl;

    /*
    练习: 元素逆置
    int arr[5] = {1,2,3,4,5}
    逆置后
    int arr[5] = {5,4,3,2,1}

    思考: 我们平时是如何进行逆置的？
    1. 将 第一位 元素 与  倒数第一位 元素位置进行互换
    2. 将 第二位 元素 与  倒数第二位 元素位置进行互换
    3.  ....
    4. 直到元素的最中间位置就结束
        这里可能出现两种情况:
        1. 数组长度是奇数 比如 5 {1,2,3,4,5}
        2. 数组长度是偶数 比如 6 {1,2,3,4,5,6}
    */

    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    int arr1Length = sizeof(arr1) / sizeof(arr1[0]);
    int tmp;

    for (int i = 0; i < arr1Length / 2; i++) {
        tmp = arr1[i];
        arr1[i] = arr1[arr1Length - 1 - i];
        arr1[arr1Length - 1 - i] = tmp;
    }

    for (int i = 0; i < arr1Length; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    /*

        数组排序
        1. 冒泡排序
        进行多次遍历，每次把最大的元素放到前面
         |
        {5,8,7,6,4,9}
        -> |
        {9,5,8,7,6,4}
        ->   |
        {9,8,5,7,6,4}
        ->     |
        {9,8,7,5,6,4}
        ->       |
        {9,8,7,6,5,4}
        ->         |
        {9,8,7,6,5,4}

    */
    int b[6] = {5, 8, 7, 6, 4, 9};
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < (sizeof(b) / sizeof(b[0])); i++) {
        // cout << b[i] << ": ";
        for (int j = i + 1; j < sizeof(b) / sizeof(b[0]); j++) {
            // cout << b[j] << " ";
            if (b[i] < b[j]) {
                tmp = b[i];
                b[i] = b[j];
                b[j] = tmp;
            }
        }
        // cout << endl;
    }
    for (int i = 0; i < sizeof(b) / sizeof(b[0]); i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}