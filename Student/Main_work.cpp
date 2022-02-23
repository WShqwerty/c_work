#include <iostream>
#include "student.h"
using namespace std;

int main(void){
    student st1(1, "xiaoming");
    st1.display();
    student st2(2, "lihua", 30, 24, 19);
    st2.display();
    return 0;
}