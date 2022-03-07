#include <iostream>
#include "matrix_func.h"
using namespace std;

void Solution::func(int **a,int n,int m)
{
    int i,j;    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}

void Solution::move(int a[],int n)
{
    int i,t=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=t;
}

int Solution::add_row(int a[],int n)
{
    int s=0,i,j=1;
    for(i=n-1;i>=0;i--,j=j*2)
    {
        s+=a[i]*j;
    }
    return s;
}

int Solution::find_max(int a[],int n)
{
    int i,max=0,num_get;
    for(i=0;i<n;i++){
        num_get=add_row(a,n);
        if(max<num_get){
            max=num_get;
        }
        move(a,n);
    }
    return max;
}