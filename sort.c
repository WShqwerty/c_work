#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a[5] = {1,3,2,4,5},i,j,n;
    printf("%d\n", sizeof(a));
    for(i=5-1;i>0;i--){
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
    system("pause");
    return 0;
}