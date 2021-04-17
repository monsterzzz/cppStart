#include <iostream>
using namespace std;

class Point {
   private:
    int x;
    int y;

   public:
    int xGetter() { return x; };
    int yGetter() { return y; };
    void xSetter(int x) { this->x = x; };
    void ySetter(int y) { this->y = y; };
};

class Circle {
   private:
    int R;

   public:
    // 判断点在圆的什么位置，圆心为(0,0)
    int position(Point p) {
        int result = (p.xGetter() * p.xGetter()) + (p.yGetter() * p.yGetter());
        if (result == (this->R * this->R)) {
            return 0;
        } else if (result < (this->R * this->R)) {
            return -1;
        } else {
            return 1;
        }
    };
    void RSetter(int R) { this->R = R; };
};

int main() {
    // 圆的半径为10, 点的坐标为(5,0)，点应该在圆内
    Point p;
    p.xSetter(5);
    p.ySetter(0);
    Circle c;
    c.RSetter(10);
    cout << c.position(p) << endl;
}