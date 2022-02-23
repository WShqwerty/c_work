#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(int C, int M, int E){
    Chinese = C;
    Math = M;
    English = E;
}

Point::~Point(){
    cout<<"worked!"<<endl;
}

void Point::display(){
    cout<<"Chinese:"<<this->Chinese<<"\t";
    cout<<"Math:"<<this->Math<<"\t";
    cout<<"English:"<<this->English<<endl;
}