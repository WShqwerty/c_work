#include <iostream>
#include "solution.h"
using namespace std;

int main(void){
    solution s;
    int n,virus_num;
    cout<<"地图大小：";
    cin>>n;
    cout<<"病毒数量(目前只能一个）：";
    cin>>virus_num;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }

    int fast_days = 10;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 1;
            int *p[n];
            for(int i=0;i<n;i++){
                p[i] = a[i];
            }
            int days_count = s.find_days(p,n);
            if(fast_days>days_count){
                fast_days = days_count;
            }
            a[i][j] = 0;
        }
    }

    cout<<virus_num<<"个病毒最快"<<fast_days-1<<"天全部感染"<<n<<"*"<<n<<"大小的地图！"<<endl;

    // int *p[n];
    // for(int i=0;i<n;i++){
    //     p[i] = a[i];
    // }

    // int days_count = s.find_days(p,n);

    // cout<<"一共要"<<days_count-1<<"天时间感染全部地区！"<<endl;

    return 0;
}