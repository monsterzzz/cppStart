#include <iostream>
using namespace std;

/*

    拷贝构造函数 的调用时机
    1.使用一个已经创建完毕的对象来创建一个新的对象
    2.使用值传递的方式给函数参数传值
    3.值方式返回局部对象


*/

class Person {
   public:
    int id;
    Person(int id) {
        cout << "有参构造函数" << endl;
        this->id = id;
    }
    Person(const Person& p) {
        cout << "拷贝构造函数" << endl;
        this->id = p.id;
    }
    ~Person() { cout << "构析函数" << endl; }
};

void tmp1(Person p) {
    cout << &p << ": " << p.id << endl;
}

// 以值的方式返回局部对象
Person tmp2() {
    Person p = Person(10);
    cout << &p << endl;
    return p;  // 这里会调用拷贝构造
}

int main() {
    Person p1 = Person(10);

    // 1.使用一个已经创建完毕的对象来创建一个新的对象
    Person p2 = Person(p1);

    // 2.使用值传递的方式给函数参数传值
    cout << &p1 << endl;
    tmp1(p1);  // 调用了拷贝构造函数,形参地址已经发生改变

    cout << "----------" << endl;
    // 3.值方式返回局部对象 ..
    // 理论上会产生拷贝构造,但是编译器做了优化,这里没有发生拷贝
    Person p3 = tmp2();
    cout << &p3 << endl;
}