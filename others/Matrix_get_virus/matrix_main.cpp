#include <iostream>
#include "solution.h"
using namespace std;

#define MAX_SIZE 20

int main(void){
    solution s;
    int num_get[MAX_SIZE];
    int n = 0;

    /* 接收数据。*/
    scanf("%d", &num_get[n]);
    n++;
    while(getchar()!='\n'){
        scanf("%d", &num_get[n]);
        n++;
    }
    // cout<<n<<endl;
    
    // cout<<"worked 1"<<endl;

    /* 处理数据，生成数组。*/
    n = s.find_matrix_num(n);

    // cout<<"worked 2"<<endl;

    if(n==0){
        cout<<"Input error!"<<endl;
        exit(-1);
    }

    // cout<<"worked 3"<<endl;

    int a[n][n];
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = num_get[k];
            // cout<<a[i][j];
            k++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    // cout<<"worked 4"<<endl;

    /* 初始化*/
    
    int count = 0;
    int days_count = 0;
    int virus_get[n][n+1];

    /* 进行统计。*/
    while(count<n){
        count = 0;
        for(int i=0;i<n;i++){
            int arr[n+1];
                // cout<<"worked! 5"<<endl;
            int *arr_new = s.find_virus(a[i], n, arr);
            if(arr_new[n] == -2){
                count++;    
            }
            for(int j = 0;j<=n;j++){
                virus_get[i][j] = arr_new[j];
            }
                
        }   

        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(virus_get[i][j] != -1){
                    int *p[n];
                    for(int k=0;k<n;k++){
                        p[k] = a[k];
                    }
                    // cout<<"i:"<<i<<"\tj:"<<virus_get[i][j]<<endl;
                    s.get_virus(p,n,i,virus_get[i][j]);
                }
            }
        }
        days_count++;
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"一共要"<<days_count-1<<"天时间感染全部地区！"<<endl;

    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<=n;j++){
    //         cout<<virus_get[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }

    /* get_virus*/
    // int *p[n];
    // for(int i=0;i<n;i++){
    //     p[i] = a[i];
    // }

    // s.get_virus(p,n,0,0);

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<a[i][j]<<"\t";
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}

