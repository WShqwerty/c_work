#include <iostream>
#include <string>

#include "student.h"
using namespace std;

student::student(int Id, string Name){
    this->Id = Id;
    this->Name = Name;
}

void student::display(){
    cout<<"ID:"<<this->Id<<"\tName:"<<this->Name<<endl;
}

student::~student(){
    cout<<"worked!"<<endl;
}
