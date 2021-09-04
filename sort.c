#include <stdio.h>
#include <stdlib.h>

// 宏定义。
#define LENTH_A 5

// 函数申明。
void moop_sort(int a[]);

int main(void){
    // 申明变量。
    int a[LENTH_A] = {1,3,2,4,5},i;

    // 调用函数。
    moop_sort(a);

    // 测试原函数中的参数值是否改变，显示结果：成功改变。
    for(i = 0;i<5;i++){
        printf("%d->", a[i]);
    }
    printf("\n");

    //其他。
    system("pause");
    return 0;
}

// 冒泡函数部分,无返回值，参数传递为地址而不是数据，因此原来函数中的参数值也发生了改变。
void moop_sort(int a[]){
    int i,j,n;
    // 由大到小排列，一一比较，小就交换。
    // 外层循环，由大到小，表示需要比较的数组长度减小。  
    for(i=LENTH_A-1;i>0;i--){
        // 内存循环，从数组第一个开始，将最小的数移动到最后一位。
        for(j=0;j<i;j++){
            // 数组存储的元素进行交换。
            if(a[j]<a[j+1]){
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }
        }
    }
    //循环输出整个数组。
    for(i = 0;i<5;i++){
        printf("%d->", a[i]);
    }
    printf("\n");
}