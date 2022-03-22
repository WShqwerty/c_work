#ifndef _TEST1_CPP_
#define _TEST1_CPP_

#include <iostream>
#include <vector>
// #include <cstdlib>

// #include <stdexcept>
using namespace std;

template <class T>
class Stack{
private:
    vector<T> elems;

public:
    void push(T const&);
    void pop();
    T top() const;
    bool empty() const{
        return elems.empty();
    }
};

#endif