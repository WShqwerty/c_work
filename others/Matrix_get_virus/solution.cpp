#include <iostream>
#include "solution.h"
using namespace std;

int solution::find_matrix_num(int n){
    for(int i=1;i<n;i++){
        if(n == i*i)
            return i;
    }
    return 0;
}

void solution::get_virus(int **a, int n, int i, int j){
    if(i==0&&j==0){
        a[i+1][j] = 1;
        a[i][j+1] = 1;
    }else if(i==n-1&&j==0){
        a[i-1][j] = 1;
        a[i][j+1] = 1;
    }else if(i==0&&j==n-1){
        a[i+1][j] = 1;
        a[i][j-1] = 1;
    }else if(i==n-1&&j==n-1){
        a[i-1][j] = 1;
        a[i][j-1] = 1;
    }else if(i==0){
        a[i][j-1] = 1;
        a[i+1][j] = 1;
        a[i][j+1] = 1;
    }else if(i==n-1){
        a[i-1][j] = 1;
        a[i][j+1] = 1;
        a[i][j-1] = 1;
    }else if(j==0){
        a[i-1][j] = 1;
        a[i+1][j] = 1;
        a[i][j+1] = 1;
    }else if(j==n-1){
        a[i-1][j] = 1;
        a[i+1][j] = 1;
        a[i][j-1] = 1;
    }else {
        a[i-1][j] = 1;
        a[i+1][j] = 1;
        a[i][j-1] = 1;
        a[i][j+1] = 1;
    }
}

int* solution::find_virus(int a[], int n, int arr[]){
    int count=0;
    for(int i=0;i<n;i++){
        arr[i] = -1;
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            arr[i] = i;
            count++;
        }
    }
    arr[n] = count;
    if(count==n){
        arr[n] = -2;
    }
    return arr;
}

int solution::find_days(int **arr_get, int n){
    solution s;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = arr_get[i][j];
        }
    }

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

    return days_count;
}
