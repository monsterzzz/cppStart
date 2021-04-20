#include <iostream>
using namespace std;

class Person {
   public:
    int age;
    Person operator+(Person& p1) {  // 实现对象相加
        Person p;
        p.age = this->age + p1.age;
        return p;
    }

    Person operator-(Person& p1) {  // 实现对象相减
        Person p;
        p.age = this->age - p1.age;
        return p;
    }

    Person operator*(Person& p1) {  // 实现对象相乘
        Person p;
        p.age = this->age * p1.age;
        return p;
    }

    Person operator/(Person& p1) {  // 实现对象相除
        Person p;
        p.age = this->age / p1.age;
        return p;
    }

    // 左移运算符重载

    // cout << p 可以看成 cout + p 这种形式
    // 所以我们可以进行重载

    // Person operator<<(ostream& out) {} 这样只能实现 p << cout

    // 想实现 cout << p << endl; 需要通过全局函数进行重载
};

ostream& operator<<(ostream& out, Person& p) {
    out << p.age;
    return out;
}

class P1 {
   public:
    int age;
    P1() {}
    P1(int age) { this->age = age; }
};

int main() {
    P1 p1(10);
    P1 p2(20);
    P1 tmp1;
    // tmp1 = p1 + p2; // 对象之间不能进行相加

    Person p3;
    Person p4;
    p3.age = 10;
    p4.age = 20;

    // 实现了运算符重载之后可以进行操作
    Person tmp2;
    tmp2 = p3 + p4;  // tmp2.age = 30
    tmp2 = p3 - p4;  // tmp2.age = -10
    tmp2 = p3 * p4;  // tmp2.age = 200
    tmp2 = p3 / p4;  // tmp2.age = 0.5 int之后 0

    cout << tmp2;  // 返回的是void 不能够继续使用<< 操作符进行追加
    cout << tmp2 << endl;
}