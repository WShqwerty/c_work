#ifndef _Point_H_
#define _Point_H_

class Point
{
private:
    int Chinese;
    int Math;
    int English;
public:
    Point(){this->Chinese=0;this->Math=0;this->English=0;};
    Point(int C, int M, int E);
    void display();
    ~Point();
};

#endif