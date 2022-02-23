#include <iostream>
#include "student.h"
using namespace std;


student::student(int Id, string Name, int C, int M, int E){
    this->Id = Id;
    this->Name = Name;
    this->Chinese = C;
    this->Math = M;
    this->English = E;
}

void student::display(){
    cout<<"Student Id:\t"<<this->Id<<"\t";
    cout<<"Name:\t"<<this->Name<<"\t";
    cout<<"Chinese:\t"<<this->Chinese<<"\t";
    cout<<"Math:\t"<<this->Math<<"\t";
    cout<<"English:\t"<<this->English<<endl;
}

student::~student(){
    cout<<"student Destructor is called!"<<endl;
}