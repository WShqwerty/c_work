#include <iostream>
using namespace std;

int fibo(int);

int main(void){
    int n;
    cin>>n;
    // cout<<fibo(n)<<endl;
    for(int i=1;i<n;i++){
        cout<<fibo(i)<<" ";
    }
    cout<<endl;
    return 0;
}

int fibo(int n){
    if(n<=2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}