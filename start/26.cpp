#include <ctime>
#include <iostream>
using namespace std;

struct student {
    int id;
    int age;
    string name;
};

struct teacher {
    int id;
    int age;
    string name;
    struct student s[5];
};

void valueSetter(struct teacher t[], int size) {
    int count = 0;
    srand(time(0));
    for (int i = 0; i < size; i++) {
        t[i].id = i;
        // t[i].age = 50;
        t[i].age = (rand() % 40) + 25;  // 25 - 60 岁
        t[i].name = "Teacher_" + to_string(i);
        for (int j = 0; j < 5; j++) {
            t[i].s[j].id = count;
            // t[i].s[j].age = 18;
            t[i].s[j].age = (rand() % 18) + 10;
            t[i].s[j].name = "Student_" + to_string(count);
            count++;
        }
    }
}

void teacherPrinter(const struct teacher t[], int size) {
    for (int i = 0; i < size; i++) {
        cout << t[i].id << endl;
        cout << t[i].age << endl;
        cout << t[i].name << endl;
        for (int j = 0; j < 5; j++) {
            cout << "\t" << t[i].s[j].id << endl;
            cout << "\t" << t[i].s[j].age << endl;
            cout << "\t" << t[i].s[j].name << endl;
        }
    }
}

struct hero {
    string name;
    int age;
    string sex;
};

void structBubbleSort(struct hero h[], int size) {
    struct hero tmp;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (h[i].age > h[j].age) {
                tmp = h[i];
                h[i] = h[j];
                h[j] = tmp;
            }
        }
    }
}

int main() {
    struct teacher t[3];
    valueSetter(t, 3);
    teacherPrinter(t, 3);
    struct hero h[6] = {{"鲁班7号", 3, "男"}, {"小乔", 17, "女"},
                        {"吕布", 29, "男"},   {"诸葛亮", 26, "男"},
                        {"芈月", 24, "女"},   {"程咬金", 48, "男"}};
    for (int i = 0; i < 6; i++) {
        cout << "{ " << h[i].name << ", " << h[i].age << ", " << h[i].sex
             << " }" << endl;
    }
    structBubbleSort(h, 6);
    for (int i = 0; i < 6; i++) {
        cout << "{ " << h[i].name << ", " << h[i].age << ", " << h[i].sex
             << " }" << endl;
    }
}