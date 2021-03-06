#include "solution.h"

int solution::select(int left, int right, int k){
    if(left >= right){
        return a[left];
    }

    int i = left;
    int j = right+1;

    int pivot = a[left];

    while(true){
        do{
            i = i+1;
        }while(a[i]<pivot);
        do{
            j = j-1;
        }while(a[j]>pivot);
        if(i>=j){
            break;
        }
        swap(a[i], a[j]);
    }

    if(j-left+1 == k){
        return pivot;
    }
    a[left] = a[j];
    a[j] = pivot;
    if(j-left+1 < k){
        return select(j+1, right, k-j+left-1);
    }else{
        return select(left, j-1, k);
    }
}