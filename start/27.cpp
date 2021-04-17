#include <iostream>
using namespace std;

#define MAX_SIZE 200  // 宏 不能使用分号

struct link {
    int id;
    string name;
    int phone;
};

struct links {
    int size;
    struct link l[MAX_SIZE + 1];
};

void menu() {
    // 终端乱码修改
    // 注册表 计算机\HKEY_CURRENT_USER\Console\G:_code_c++_27.exe pagecode修改为
    // fde9
    cout << "***************************" << endl;
    cout << "***** 通讯录管理系统 ******" << endl;
    cout << "***** 1.添加联系人   ******" << endl;
    cout << "***** 2.显示联系人   ******" << endl;
    cout << "***** 3.删除联系人   ******" << endl;
    cout << "***** 4.查找联系人   ******" << endl;
    cout << "***** 5.修改联系人   ******" << endl;
    cout << "***** 6.清空联系人   ******" << endl;
    cout << "***** 7.退出通讯录   ******" << endl;
    cout << "***************************" << endl;
}

void addLink(struct links* ls) {
    struct link l;
    l.id = ls->size;
    cout << "姓名:" << endl;
    string name;
    cin >> l.name;
    cout << "电话:" << endl;
    cin >> l.phone;
    ls->l[ls->size] = l;
    ls->size++;
}

void queryAllLink(struct links* ls) {
    for (int i = 0; i < ls->size; i++) {
        cout << "id: " << ls->l[i].id << endl;
        cout << "姓名: " << ls->l[i].name << endl;
        cout << "电话: " << ls->l[i].phone << endl;
        cout << "----------------" << endl;
    }
    cout << "总人数: " << ls->size << endl;
}

void queryLink(struct links* ls) {
    bool flag = 0;
    for (int i = 0; i < ls->size; i++) {
        string name;
        cout << "请输入需要查找的联系人:" << endl;
        cin >> name;
        if (ls->l[i].name == name) {
            flag = 1;
            cout << "id: " << ls->l[i].id << endl;
            cout << "姓名: " << ls->l[i].name << endl;
            cout << "电话: " << ls->l[i].phone << endl;
            cout << "----------------" << endl;
            break;
        }
    }
    if (!flag) {
        cout << "没有查找到该联系人!" << endl;
    }
}

void updateLink(struct links* ls) {
    bool flag = 0;
    struct link* p;
    for (int i = 0; i < ls->size; i++) {
        string name;
        cout << "请输入需要修改的联系人:" << endl;
        cin >> name;
        if (ls->l[i].name == name) {
            p = &ls->l[i];
            flag = 1;
            cout << "id: " << ls->l[i].id << endl;
            cout << "姓名: " << ls->l[i].name << endl;
            cout << "电话: " << ls->l[i].phone << endl;
            cout << "----------------" << endl;
            break;
        }
    }
    if (!flag) {
        cout << "没有查找到该联系人!" << endl;
    } else {
        cout << "新的名字: " << endl;
        cin >> p->name;
        cout << "新的电话: " << endl;
        cin >> p->phone;
    }
}

void deleteLink(struct links* ls) {
    cout << "请输入要删除的联系人姓名:" << endl;
    string name;
    bool flag = 0;
    cin >> name;
    for (int i = 0; i < ls->size; i++) {
        if (ls->l[i].name == name) {
            flag = 1;
            ls->l[i] = ls->l[i + 1];
            break;
        }
    }
    if (!flag) {
        cout << "没有找到这个联系人" << endl;
    } else {
        ls->size--;
    }
}

void cleanLink(struct links* ls) {
    ls->size = 0;
}

int main() {
    struct links ls;
    struct link l[MAX_SIZE];
    ls.size = 0;
    int opt;
    bool flag = 1;
    while (flag) {
        menu();
        cin >> opt;
        switch (opt) {
            case 0:
                flag = 0;
                cout << "欢迎下次使用!" << endl;
                break;
            case 1:
                addLink(&ls);
                break;
            case 2:
                queryAllLink(&ls);
                break;
            case 3:
                deleteLink(&ls);
                break;
            case 4:
                queryLink(&ls);
                break;
            case 5:
                updateLink(&ls);
                break;
            case 6:
                cleanLink(&ls);
                break;
            default:
                cout << "请输入正确的指令!" << endl;
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}