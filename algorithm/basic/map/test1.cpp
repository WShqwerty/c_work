#include "test1.h"

int main(void){
    map<string, float, less<string> > c;
    c.insert(make_pair("cafe", 7.75));
    c.insert(make_pair("banana", 1.72));
    c.insert(make_pair("piza", 30.69));
    c["wine"] = 15.66;
    map<string,float>::iterator pos;
    for(pos = c.begin();pos!=c.end();pos++){
        cout<<pos->first<<" "<<pos->second<<endl;
    }
    c.clear();
    return 0;
}