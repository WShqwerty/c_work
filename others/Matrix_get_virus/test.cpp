#include <iostream>
#include "solution.h"
using namespace std;

int main(void){
    int n;
    cout<<"请输入矩阵大小：";
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }

    int fast_days = 100;
    solution s;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 1;
            for(int k=0;k<n;k++){
                for(int l=0;l<n;l++){
                    if(k!=i&&l!=j){
                        a[k][l] = 1;
                        int *p[n];
                        for(int i=0;i<n;i++){
                            p[i] = a[i];
                        }
                        int days_count = s.find_days(p,n);
                        if(fast_days>days_count){
                            fast_days = days_count;
                        }
                        a[k][l] = 0;
                    }
                }
            }
            a[i][j] = 0;
        }
    }

    cout<<fast_days-1<<endl;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    return 0;
}