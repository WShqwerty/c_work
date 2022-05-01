#include <iostream>
using namespace std;

class hello{
public:
    int x = 0;
    int y = x;
    hello(int x);
    ~hello();
    void display(void);
};

hello::hello(int x){
  cout<<"hello world!"<<endl;  
}

void hello::display(void){
    cout<<x<<y<<endl;
}

hello::~hello(){
    cout<<"hello world!"<<endl;
}

int main(void){
    hello he(1);
    he.display();
    return 0;
}