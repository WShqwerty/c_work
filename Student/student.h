#ifndef _Student_H_
#define _Student_H_
#include<string>
#include "Point.h"
using namespace std;

class student
{
private:
    int Id;
    string Name;
    Point p1;
public:
    student(){};
    student(int Id, string Name);
    student(int Id, string Name, int C, int M, int E);
    void display();
    ~student();
};

#endif