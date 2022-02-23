#include <iostream>
#include <string>

#include "student.h"
using namespace std;

student::student(int Id, string Name)
{
    this->Id = Id;
    this->Name = Name;
}

student::student(int I, string N, int C, int M, int E):p1(C, M, E){
    this->Id = I;
    this->Name = N;
}

void student::display(){
    cout<<"ID:"<<this->Id<<"\tName:"<<this->Name<<"\t";
    this->p1.display();
}

student::~student(){
    cout<<"Destructor is called!"<<endl;
}
