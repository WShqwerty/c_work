#include <iostream>
#include "matrix_func.h"
using namespace std;


void Solution::func(int **a,int n,int m)
{
    int i,j,t;    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
}