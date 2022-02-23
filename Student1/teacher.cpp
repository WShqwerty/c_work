#include <iostream>
#include "teacher.h"
using namespace std;

teacher::teacher(int Id, string Name){
    this->a.Id = Id;
    this->a.Name = Name;
}

teacher::~teacher(){
    cout<<"teacher Desturctor is called!"<<endl;
}

void teacher::display(){
    cout<<"from Teacher: Id:"<<this->a.Id<<"\t";
    cout<<"Name:"<<this->a.Name<<endl;
}