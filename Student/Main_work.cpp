#include <iostream>
#include "student.h"
#include "teacher.h"
using namespace std;

int main(void){
    student st1(1, "xiaoming");
    st1.display();
    student st2(2, "lihua", 30, 24, 19);
    st2.display();
    teacher te1(3, "xiaohong");
    te1.display();
    return 0;
}