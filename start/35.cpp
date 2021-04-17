#include <iostream>
using namespace std;

struct Student1 {
    int id;
};

class Student2 {
    int id;
};

int main() {
    // struct 和 class 的唯一区别就是访问权限不同
    // struct 默认为 public
    // class  默认为 private

    struct Student1 s1 = {12};
    Student2 s2;
    // s2.id = 12; error 私有的 不可以访问
}