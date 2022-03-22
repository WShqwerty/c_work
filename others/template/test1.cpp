#include "test1.h"
#include <string>

template <class T>
void Stack<T>::push(T const& elem){
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop(){
    if(elems.empty()){
        throw out_of_range("Stack<>::pop():empty stack");
    }
    elems.pop_back();
}

template <class T>
T Stack<T>::top() const{
    if(elems.empty()){
        throw out_of_range("Stack<>::top():empty stack");
    }
    return elems.back();
}

int main(void){
    try{
        Stack<int> intStack;
        Stack<string> stringStack;

        intStack.push(7);
        cout<<intStack.top()<<endl;

        stringStack.push("hello");
        cout<<stringStack.top()<<endl;
        stringStack.pop();
        stringStack.pop();
    }catch(exception const& ex){
        cerr<<"Exception:"<<ex.what()<<endl;
        return -1;
    }
}