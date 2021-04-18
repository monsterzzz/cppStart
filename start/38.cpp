#include <iostream>
using namespace std;

class People {
   public:
    // 如果提供了至少一个构造函数,那么编译器将不再提供空的构造函数
    People(string name) {  // 构造函数
        cout << name << "构造函数" << endl;
        this->name = name;
    };

    // 拷贝构造函数
    People(const People& p) { this->name = p.name; };

    ~People() { cout << name << "构析函数" << endl; };

   private:
    string name;
};

int main() {
    /*

    构造函数
控制函数初始化
    构析函数
控制函数销毁

    如果没有提供构造函数或者构析函数的实现,编译器会自动帮我们提供一个空实现

    */

    // People p; // 错误 ,没有提供空参数的构造函数

    // People p1();  //
    // 不要使用这种方式初始化,这样编译器会认为这是一个函数的声明 void func1();

    People p2("nihao");
}