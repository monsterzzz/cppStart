#include <iostream>
using namespace std;

/*

    构造函数的调用规则
    1.
   如果实现了有参构造函数,编译器就不再提供无参构造函数,但是还回提供默认拷贝构造函数
    2. 如果实现了拷贝构造函数,编译器不再提供任何构造函数

*/

class Person1 {
   public:
    int id;
};

class Person2 {
   public:
    int id;
    Person2(int id) { this->id = id; }
};

class Person3 {
   public:
    int id;
    Person3(const Person3& p) { this->id = p.id; }
};

int main() {
    // 1.
    // 没有实现任何构造函数.编译器会提供默认的构造函数和构析函数和拷贝构造函数
    Person1 p1;
    p1.id = 10;
    Person1 p2(p1);

    cout << p1.id << endl;
    cout << p2.id << endl;

    // 2.
    // 实现了有参的构造函数,编译器不再提供无参的构造函数,但是会提供拷贝构造函数
    Person2 p3(20);
    Person2 p4(p3);
    // Person2 p5;  // 错误!不存在默认的构造函数

    cout << p3.id << endl;
    cout << p4.id << endl;

    // 3.
    // 实现拷贝构造函数,编译器不再实现任何构造函数
    // Person3 p6;      // 错误
    // Person3 p7(p6);  // 错误!
}