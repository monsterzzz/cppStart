#include <iostream>
using namespace std;

/*

    this
    指向对象本身的指针
    1. 用来解决命名冲突
    2. 返回对象本身


*/

class P1 {
   public:
    P1(int i) {
        id = i;  // 需要起不同的名字，很麻烦
        // 如果起相同的名字，则出现不知道是哪个对象的问题
        // 并且变量名也会冲突
    }

   private:
    int id;
};

class P2 {
   public:
    P2(int id) {
        this->id = id;  // this 直接指向自己这个对象，通过->操作符来进行访问操作
    }

   private:
    int id;
};

class P3 {
   public:
    int age;

    P3() { cout << "无参构造" << endl; }

    // P3(int age) { cout << "有参构造" << endl; }

    P3(const P3& p) {
        cout << p.age << endl;
        this->age = p.age;
        cout << "拷贝构造" << endl;
    }

    P3& addAge(int age) {  //需要使用引用,
        this->age = age + this->age;
        return *this;  //通过返回本身，可以实现链式调用
    }
};

int main() {
    P3 p;
    p.age = 0;
    cout << &p << endl;

    P3 tmp;
    tmp = p.addAge(10);
    cout << "11" << tmp.age << endl;
    p.addAge(10).addAge(10);

    cout << p.age << endl;
}