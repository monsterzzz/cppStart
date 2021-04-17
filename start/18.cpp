#include <iostream>
using namespace std;

int main() {
    /*

    二维数组

    生活中会有很多东西可以使用二维数组进行表示

    比如 翻牌
    2行3列都是盖着的牌 等待翻牌
    * * *
    * * *

    比如表格...

    */

    //定义方式

    // 1. 通过数组下标进行访问赋值
    int arr1[2][3];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[0][2] = 3;
    arr1[1][0] = 4;
    arr1[1][1] = 5;
    arr1[1][2] = 6;
    // 2.  只推荐使用这种写法，自己和别人都看得清楚
    int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // 3.
    int arr3[2][3] = {1, 2, 3, 4, 5, 6};
    // 4.
    int arr4[][3] = {1, 2, 3, 4, 5, 6};

    // cout << sizeof(arr1) / sizeof(arr1[0]) << endl;
    // cout << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;

    // 二维数组的遍历
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        for (int j = 0; j < sizeof(arr1[i]) / sizeof(arr1[i][0]); j++) {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    };

    /*

    练习: 考试成绩统计
    有三名同学的成绩如下，请分别输出每个同学的总成绩
            语文    数学    英语
        a   80      76      98
        b   88      81      67
        c   99      61      78
    */

    // 创建一个2维数组保存每个同学的成绩
    int a[3][3] = {{80, 76, 98}, {88, 81, 67}, {99, 61, 78}};
    // 遍历这个二维数组
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        // 创建一个总成绩变量
        int result = 0;
        for (int j = 0; j < sizeof(a[i]) / sizeof(a[i][0]); j++) {
            result += a[i][j];
        }
        cout << "成绩: " << result << endl;
    }
}