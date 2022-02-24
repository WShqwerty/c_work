#include<iostream>
using namespace std;

// --------------------------
// 声明。
class Point{
private:
    int X, Y;
public:
    Point(int = 0, int = 0);
    Point(const Point&);
    ~Point();
    void displayxy();
};

Point func(Point);

// ------------------------
// Main函数。
int main(void){
    Point p1(3, 4);
    Point p2 = p1; // 调用拷贝函数。
    p2 = func(p1); // 同上。
    return 0;
}

// ------------------------------
// 函数实现。
Point::Point(int x, int y){
    X = x;
    Y = y;
    cout<<"Constructor is called!";
    displayxy();
}

Point::Point(const Point &p){
    X = p.X;
    Y = p.Y;
    cout<<"Copy Constructor is called!";
    displayxy();
}

Point::~Point(){
    cout<<"Destructor is called!";
    displayxy();
}

void Point::displayxy(){
    cout<<"\t("<<X<<","<<Y<<")"<<endl;
}

Point func(Point p){
    int x = 10*2;
    int y = 10*2;
    Point pp(x, y);
    return pp;
}