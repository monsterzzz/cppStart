#include <iostream>
using namespace std;

class Person {
   private:
    string name;
    int age;
    void nameSetter(string name) {  // 通过权限修饰符来控制属性的修改和访问
        // 比如可以在这里检测输入名字的长度不可以超过多少个字符
        this->name = name;
    };
    void ageSetter(int age) {
        if (age < 0 || age > 60) {  //在这里控制年龄输入的逻辑
            cout << "请输入正确的年龄" << endl;
        };
        this->age = age;
    };

   public:
    string nameGetter() {
        // 可以在这里控制对得到的名字信息进行格式化或者其他你想进行的任何操作
        return this->name;
    };
    int ageGetter() { return this->age; }
};

int main() {}