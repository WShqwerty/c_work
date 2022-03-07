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