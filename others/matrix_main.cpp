#include <iostream>
#include "matrix_func.h"
using namespace std;

/*
5
1,0,1,0,1
0,1,0,1,1
0,0,1,1,0
1,1,0,0,1
0,1,0,0,0
*/

int main()
{
    int n;
    cout<<"please input:"<<endl;
    cin>>n;
    int a[n][n];
    int i,j,s=0;

    for(i = 0;i<n;i++){
        for(j = 0;j<n;j++){
            scanf("%d,", &a[i][j]);
        }
    }
    
    /* 求和。*/
    Solution solu;
    for(i=0;i<n;i++)
    {
        s+=solu.find_max(a[i],n);
    }
    printf("%d\n",s);

    // move(a,5);
    // i = find_max(a,5);
    // printf("%d\n",i);



    // for(i=0;i<5;i++)
    //     printf("%d\t",a[i]);
    // printf("\n");
    // int a[5][5]={
    //     {0,0,0,0,0},
    //     {1,0,0,0,0},
    //     {0,0,0,0,0}
    // };
    // int *p[5]={
    //     a[0],a[1], a[2], a[3], a[4]
    // };
    // func(p,5,5);
    return 0;
}

