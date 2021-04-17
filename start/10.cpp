#include <iostream>
using namespace std;

int main() {
    /*

    条件选择结构

    1.
    if(){}

    2.
    if(){

    }else{

    }

    3.
    if(){

    }else if(){

    }else if(){

    }else(){

    }

    4. 三目运算符

    表达式1 ? 表达式2 ： 表达式3

    ===>

    if(表达式1){
        表达式2
    }else{
        表达式3
    }

    c = a + 1 > 10 ? 15 : 20
    如果 a + 1 > 10,那么c = 15,否则 c = 20
    c = a + 1 > 10 ? 15 + 15 : 20 + 100  可以加入运算符
    c = a + 1 > 10 ? b + 1 > 20 ? 10 : 15 : 30 三目运算符可以嵌套

    代码不要写得复杂，自己和别人都容易看不懂
    */

    int a = 10;
    int b = 20;
    int c = 30;

    // 如果 a > 10,则输出 hello world
    if (a > 10) {
        cout << "hello world" << endl;
    }

    // 如果 a < 10,则输出 hello world, 否则输出 nihao

    if (a < 10) {
        cout << "hello world" << endl;
    } else {
        cout << "nihao" << endl;
    }

    // 如果 a == 1 输出 a, a==2 输出 b, a==3，输出c,其他情况输出 hello world
    // cin >> a;
    if (a == 1) {
        cout << "a" << endl;
    } else if (a == 2) {
        cout << "b" << endl;
    } else if (a == 3) {
        cout << "c" << endl;
    } else {
        cout << "hello world" << endl;
    }

    // if 也可以嵌套

    /*

    a = 1 ? b = 1 ? -> "aa"
            b = 2 ? -> "ab"
            b = 3 ? -> "ac"

    a = 2 ? b = 1 ? -> "ba"
            b = 2 ? -> "bb"
            b = 3 ? -> "bc"

    a = 3 ? b = 1 ? -> "ca"
            b = 2 ? -> "cb"
            b = 3 ? -> "cc"
    */

    /*

    练习: 三个小猪称体重，比较谁的体重最重
    流程: 使用三个变量A,B,C接收键盘输入以表示每只小猪的体重，然后进行比较
         比较过程：

             A > B？ ->  A > C ? -> A
                                 -> C
                     ->  B > C   -> B
                                 -> C
     */

    cout << "第一只小猪的体重:" << endl;
    cin >> a;
    cout << "第二只小猪的体重:" << endl;
    cin >> b;
    cout << "第三只小猪的体重:" << endl;
    cin >> c;

    if (a > b) {
        if (a > c) {
            cout << "第一只小猪最重" << endl;
        } else {
            cout << "第三只小猪最重" << endl;
        };
    } else {
        if (b > c) {
            cout << "第二只小猪最重" << endl;
        } else {
            cout << "第三只小猪最重" << endl;
        };
    }
}