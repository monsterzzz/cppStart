#include <iostream>
using namespace std;

/*

const 修饰 成员函数  常成员函数

常成员函数不能修改成员属性

成员属性前添加 mutable 关键字之后 可以使用常成员函数修改


const 修饰的对象叫做 常对象
常对象只能调用常成员函数

*/

class P1 {
   public:
    int id;
    mutable int age;

    P1() {}

    P1(int id, int age) {
        this->id = id;
        this->age = age;
    }

    void echo() { cout << "hello world" << endl; }
    void tmp1() { this->id = 10; }
    void tmp2() const {
        // this->id = 100;  // 常成员函数 不可以修改成员变量
        cout << this->id << endl;  //  可以访问
    }
    void tmp3() const {
        this->age = 100;  // 常成员函数 可以修改mutable成员变量
        cout << this->age << endl;  //  可以访问
    }
};

int main() {
    P1 p;
    p.id = 100;
    p.age = 300;
    p.echo();
    p.tmp1();
    p.tmp2();
    p.tmp3();

    const P1 p2(1, 1);  // 常对象
    // p2.echo();          // 错误,不可以访问非常函数
    p2.tmp2();
    p2.tmp3();
}