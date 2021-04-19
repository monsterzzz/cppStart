#include <iostream>
using namespace std;

class Manager {
    void tmp1(Building1* b) { cout << b->id << endl; }
};

class P1 {
    void echo(Building1* b);
    //    public:
    //     void echo(Building1* b) { cout << b->id << endl; }
};

class Building1 {
    // 添加友元就可以访问到类内的私有属性

    // 1. 全局函数做友元
    friend void visitBuilding(Building1* b);

    // 2. 类做友元
    friend class Manager;

    // 3. 成员函数做友元
    // friend class P1;
    friend void P1::echo(Building1* b);

   private:
    int id;
    int age;
};

// void P1::echo(Building1* b) {
//     cout << b->id << endl;
// }

// 全局函数做友元
void visitBuilding(Building1* b) {
    cout << b->id << endl;  //直接访问是访问不到私有属性的
}

int main() {}