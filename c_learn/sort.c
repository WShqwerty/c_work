#include <stdio.h>
#include <stdlib.h>

// 宏定义。
#define LENTH_A 5

// 函数申明。
void moop_sort(int a[]);
void select_sort(int a[]);

int main(void){
    // 申明变量。
    int a[LENTH_A] = {1,3,2,4,5},i;

    // 调用函数。
    // moop_sort(a);
    select_sort(a);

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

void select_sort(int a[]){
    int i,j,n,m;
    // int k;

    // 外层循环减少数组长度，将寻到的最大值放在最后一个。
    for(i=LENTH_A-1;i>0;i--){
        n = 0;
        // 寻找数组中的最大值。注意：并不是寻找最大的值，而是寻找最大值的数组下标。
        for(j = 0;j<i;j++){
            // 编辑程序时在这里出了一个问题：找大的时应该比较后一个是否比前一个大，大则取后一个的数组下标。否则会出现问题。
            if(a[j]<a[j+1]){
                n = j+1;
            }
        }
        // 将值放到数组尾部。
        m = a[n];
        a[n] = a[i];
        a[i] = m;

        // 调试代码
        /* for(k = 0;k<LENTH_A;k++){
            printf("%d->", a[k]);
        }
        printf("\n"); */

    }

    for(i = 0;i<LENTH_A;i++){
        printf("%d->", a[i]);
    }
    printf("\n");
}