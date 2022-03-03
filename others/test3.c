#include <stdio.h>
#include <string.h>

void func(char str[]){
    char m;
    int i, j;
    for (i=0, j = strlen(str); i<j; i++, j--){
        m = str[i];
        str[i] = str[j-1];
        str[j-1] = m;
        printf("%c\t", str[i]);
    }

    printf("\n%s\n", str);
}

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1)+fibo(n-2);
}

int main(void){

    int num;
    // char str[] = "hello world!";
    // char strl[] = "How do you do", *p = strl;
    
    // func(str);
    // // printf("%ld\n", strlen(str));

    // strcpy(strl+strlen(strl)/2, "es she");
    // printf("%s\n", p);
    while(num!=0){
        printf("please input a num:");
        scanf("%d", &num);

        printf("%d\n", fibo(num));
    }   

    return 0;
}