#include "test1.h"

int main(void){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    
    cout<<a.size()<<endl;

    vector<int> b;
    b = func_pass(b);
    cout<<b.size()<<endl;
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

    return 0;
}

vector<int> func_pass(vector<int> a){
    a.push_back(1);
    if(a.size()<3){
        a = func_pass(a);
    }
    return a;
}

void iterator_use(void){
    int n;
    cout<<"please input a num:";
    cin>>n;
    vector<int> a;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator p;    // 迭代器

    for(p = a.begin();p!=a.end();++p){
        cout<<*p<<" ";          // 使用迭代器引用数据
    }
    cout<<endl;
    cout<<a.size()<<endl;
    a.pop_back();
    cout<<a.size()<<endl;
    a.clear();
    cout<<a.size()<<endl;
}