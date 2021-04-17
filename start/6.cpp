#include <iostream>
using namespace std;

int main() {
    /*
    
    读取键盘输入

    scanf()
    int a;
    scanf("%d",&a)  取a的地址，把键盘输入放到a的地址中去 c语言的遗产

    cin  
    int a;
    cin >> a;  不需要操作地址
    
    */

    int a;

    scanf("%d",&a);

    printf("%d\n",a);

    printf("请输入一个数字:");
    cin >> a;

    printf("%d\n",a);


}