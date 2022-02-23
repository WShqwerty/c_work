#ifndef _Student_H_
#define _Student_H_
#include<string>
using namespace std;

class student
{
private:
    int Id;
    string Name;
public:
    student(){};
    student(int Id, string Name);
    void display();
    ~student();
};

#endif