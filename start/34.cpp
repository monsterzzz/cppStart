#include <iostream>
using namespace std;

class Student {
    // 访问权限
    // 1. public 公开的     类外可以访问
    // 2. private 私有的    类外不可以访问
    // 3. protected 受保护的  类外不可以访问，子类可以访问
   private:
    string name;  // 属性
    int age;
    int sex;

   public:
    string id;
    void sayHello() { cout << "hello world" << endl; }
    void sayId() { cout << id << endl; }

   private:
    void nameSetter(string n) {  // 方法
        name = n;
    };
};

int main() {
    Student s1;
    // s1.age 不可以访问
    s1.sayHello();  // 公开的，可以访问
    s1.id = "123456";
    s1.sayId();
    s1.id = "4564";
    s1.sayId();
}