#ifndef _Student_H_
#define _Student_H_

#include "Point.h"
#include <string>
using namespace std;

class student:private Point{
public:
    student(int Id, string Name=NULL, int C=0, int M=0, int E=0);
    ~student();
    void display();
private:
    int Id;
    string Name;
};

#endif