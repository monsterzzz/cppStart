#include <iostream>
using namespace std;

struct student {
    int id;
    int age;
    string name;
};

// 打印结构体
void printStruct(struct student s) {
    // 值传递
    cout << "{ " << s.id << ", " << s.age << ", " << s.name << " }" << endl;
}

void printStruct(struct student* s) {
    // 之前已经说过 值传递会拷贝一份副本,所以会多占用一份内存空间
    // 改用地址传递可以减少内存占用
    // 地址传递
    cout << "{ " << s->id << ", " << s->age << ", " << s->name << " }" << endl;
}

void printStruct(const struct student* s) {
    // 使用const参数可以避免 参数被修改
    // s->id = 100; 错误!
    cout << "{ " << s->id << ", " << s->age << ", " << s->name << " }" << endl;
}

int main() {
    /*

    结构体做参数

    */

    struct student s1 = {1, 25, "张三"};

    printStruct(s1);
    printStruct(&s1);
}