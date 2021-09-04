#include <stdio.h>
#include <stdlib.h>

#define LENTH_A 5

void moop_sort(int a[]);

int main(void){
    int a[LENTH_A] = {1,3,2,4,5};
    moop_sort(a);
    system("pause");
    return 0;
}

void moop_sort(int a[]){
    int i,j,n;
    for(i=LENTH_A-1;i>0;i--){
        for(j=0;j<i;j++){
            if(a[j]<a[j+1]){
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }
        }
    }
    for(i = 0;i<5;i++){
        printf("%d->", a[i]);
    }
    printf("\n");
}