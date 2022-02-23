#ifndef _Teacher_H_
#define _Teacher_H_
#include "student.h"
#include<string>
using namespace std;

class teacher
{
private:
    student a;
public:
    teacher(){};
    teacher(int Id, string Name);
    void display();
    ~teacher();
};

#endif