#include <iostream>
using namespace std;

int main() {
    int* a = new int(120);

    delete a;
    delete a;
}