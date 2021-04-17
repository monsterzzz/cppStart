#include <iostream>
using namespace std;

#define MAX_SIZE 200  // �� ����ʹ�÷ֺ�

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
    // �ն������޸�
    // ע��� �����\HKEY_CURRENT_USER\Console\G:_code_c++_27.exe pagecode�޸�Ϊ
    // fde9
    cout << "***************************" << endl;
    cout << "***** ͨѶ¼����ϵͳ ******" << endl;
    cout << "***** 1.�����ϵ��   ******" << endl;
    cout << "***** 2.��ʾ��ϵ��   ******" << endl;
    cout << "***** 3.ɾ����ϵ��   ******" << endl;
    cout << "***** 4.������ϵ��   ******" << endl;
    cout << "***** 5.�޸���ϵ��   ******" << endl;
    cout << "***** 6.�����ϵ��   ******" << endl;
    cout << "***** 7.�˳�ͨѶ¼   ******" << endl;
    cout << "***************************" << endl;
}

void addLink(struct links* ls) {
    struct link l;
    l.id = ls->size;
    cout << "����:" << endl;
    string name;
    cin >> l.name;
    cout << "�绰:" << endl;
    cin >> l.phone;
    ls->l[ls->size] = l;
    ls->size++;
}

void queryAllLink(struct links* ls) {
    for (int i = 0; i < ls->size; i++) {
        cout << "id: " << ls->l[i].id << endl;
        cout << "����: " << ls->l[i].name << endl;
        cout << "�绰: " << ls->l[i].phone << endl;
        cout << "----------------" << endl;
    }
    cout << "������: " << ls->size << endl;
}

void queryLink(struct links* ls) {
    bool flag = 0;
    for (int i = 0; i < ls->size; i++) {
        string name;
        cout << "��������Ҫ���ҵ���ϵ��:" << endl;
        cin >> name;
        if (ls->l[i].name == name) {
            flag = 1;
            cout << "id: " << ls->l[i].id << endl;
            cout << "����: " << ls->l[i].name << endl;
            cout << "�绰: " << ls->l[i].phone << endl;
            cout << "----------------" << endl;
            break;
        }
    }
    if (!flag) {
        cout << "û�в��ҵ�����ϵ��!" << endl;
    }
}

void updateLink(struct links* ls) {
    bool flag = 0;
    struct link* p;
    for (int i = 0; i < ls->size; i++) {
        string name;
        cout << "��������Ҫ�޸ĵ���ϵ��:" << endl;
        cin >> name;
        if (ls->l[i].name == name) {
            p = &ls->l[i];
            flag = 1;
            cout << "id: " << ls->l[i].id << endl;
            cout << "����: " << ls->l[i].name << endl;
            cout << "�绰: " << ls->l[i].phone << endl;
            cout << "----------------" << endl;
            break;
        }
    }
    if (!flag) {
        cout << "û�в��ҵ�����ϵ��!" << endl;
    } else {
        cout << "�µ�����: " << endl;
        cin >> p->name;
        cout << "�µĵ绰: " << endl;
        cin >> p->phone;
    }
}

void deleteLink(struct links* ls) {
    cout << "������Ҫɾ������ϵ������:" << endl;
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
        cout << "û���ҵ������ϵ��" << endl;
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
                cout << "��ӭ�´�ʹ��!" << endl;
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
                cout << "��������ȷ��ָ��!" << endl;
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}