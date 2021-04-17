#include <iostream>
using namespace std;

int main() {
    /*

    结构体
    结构体属于用户自定义的数据类型，允许用户储存不用的数据类型

    */

    // 1.定义结构体
    struct student {
        int id;       //学生编号
        string name;  //学生名字
        int age;      // 学生年龄
    };

    // 2. 创建结构体变量

    // 2.1.
    struct student s1 = {1, "张三", 18};

    // 2.2.
    struct student s2;
    s2.id = 2;
    s2.age = 17;
    s2.name = "李四";

    // 3 访问结构体
    cout << "----s1---" << endl;
    cout << s1.id << endl;
    cout << s1.age << endl;
    cout << s1.name << endl;
    cout << "----s2---" << endl;
    cout << s2.id << endl;
    cout << s2.age << endl;
    cout << s2.name << endl;

    // 4 修改结构体
    s2.name = "hello";
    cout << s2.name << endl;

    // 5 结构体数组
    // 5.1 定义方式
    struct student arrS1[3];
    arrS1[0] = {1, "a", 12};
    arrS1[1] = {2, "b", 18};
    arrS1[2] = {3, "c", 19};

    struct student arrS2[3] = {{1, "a", 17}, {2, "b", 16}, {3, "w", 14}};

    // 遍历
    for (int i = 0; i < 3; i++) {
        cout << "----" << i << "-----" << endl;
        cout << arrS1[i].id << endl;
        cout << arrS1[i].age << endl;
        cout << arrS1[i].name << endl;
    }

    // 6 结构体指针
    struct student* p1 = &s1;
    cout << p1 << endl;
    // 通过指针访问结构体的数据
    cout << p1->id << endl;
    cout << p1->age << endl;
    cout << p1->name << endl;
    // 通过指针修改结构体的数据
    p1->name = "你好";
    cout << p1->name << endl;

    // 7 结构体也可以嵌套结构体

    // 老师可以管理1个学生
    struct teacher {
        int id;
        int age;
        string name;
        struct student s;
    };

    // 老师可以管理多个学生
    struct teacher {
        int id;
        int age;
        string name;
        struct student s[5];
    };
}