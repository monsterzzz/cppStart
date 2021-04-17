#include <iostream>
using namespace std;

int main() {
    /*

    条件选择

    swtich(){
        case *:
            do something..
            break; (如果不加break，会继续往下执行)
        case * :
            do something..
            break;
        ...
        default:  (如果没有匹配到任何case,就会执行default)
            do something...
            break;
    }

    */

    int a;

    cin >> a;

    switch (a) {  // 这里也可以放入一个表达式 比如输入  a % 3
                  // 就是对三取余之后的结果进行匹配
        case 1:
            cout << "a" << endl;
            break;
            // 如果没有 break
            // 会继续运行下一条指令，即使没有匹配case，所以会输出   a
            //                                                  b
        case 2:
            cout << "b" << endl;
            break;
        case 3:
            cout << "c" << endl;
            break;
        case 4:
            cout << "d" << endl;
            break;
        default:
            cout << "hello" << endl;
    }
}