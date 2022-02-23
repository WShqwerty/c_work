#include <stdio.h>
#include <stdlib.h>

#define Max_num 20

int main(void){
    int a[Max_num] = {1, 2, 3, 4, 5, 6};
    int i = 6;

    printf("hello world!\n");
    printf("%d\n", sizeof(a));
    printf("%d\n", i>>1);
    system("pause");
    return 0;
}