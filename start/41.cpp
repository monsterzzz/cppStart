#include <iostream>
using namespace std;

/*

    深拷贝与浅拷贝

    发生拷贝构造时,会发生浅拷贝.只是将值传递过去
    这里会产生一个问题,如果属性里面包含指针,那么释放的时候就会产生问题
    在堆区的内存由程序员进行管理和控制

*/

class Person1 {
   public:
    int weight;
    int* height;
    Person1(int w, int* h) {
        this->weight = w;
        this->height = h;
    }

    ~Person1() {
        // 堆区的内存由程序员进行控制,如果不控制内存释放,将有可能导致程序崩溃.因为占用内存越来越多...
        if (this->height != NULL) {
            cout << this->height << endl;
            delete this->height;  // 这里会重复对一个内存地址进行释放,出现错误
            this->height = NULL;
        }
    }
};

class Person2 {
   public:
    int weight;
    int* height;
    Person2(int w, int* h) {
        this->weight = w;
        this->height = h;
    }

    Person2(const Person2& p) {
        this->weight = p.weight;
        this->height = new int(*p.height);  // 在这里重新开辟一段内存
    };

    ~Person2() {
        // 堆区的内存由程序员进行控制,如果不控制内存释放,将有可能导致程序崩溃.因为占用内存越来越多...
        if (this->height != NULL) {
            cout << this->height << endl;
            delete this->height;
            this->height = NULL;
        }
    }
};

int main() {
    int* p = new int(160);
    Person1 p1(100, p);
    Person1 p2(p1);  //拷贝构造函数就会直接使用赋值操作来进行拷贝

    cout << *p1.height << endl;
    cout << *p2.height << endl;
}