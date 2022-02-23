#include <stdio.h>
#include <stdlib.h>

void merge_sort(int arr[],const int len);
void merge_sort_recursive(int arr[], int reg[], int start, int end);

int main(void){
    int a[6] = {3, 2, 4, 5, 6, 1};
    int i;

    merge_sort(a, 6);

    for(i=0;i<6;i++){
        printf("%d->", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}

void merge_sort_recursive(int arr[], int reg[], int start, int end) {
    if (start >= end)
        return;
    int len = end - start, mid = (len >> 1) + start;
    int start1 = start, end1 = mid;
    int start2 = mid + 1, end2 = end;
    merge_sort_recursive(arr, reg, start1, end1);
    merge_sort_recursive(arr, reg, start2, end2);
    int k = start;
    while (start1 <= end1 && start2 <= end2)
        reg[k++] = arr[start1] < arr[start2] ? arr[start1++] : arr[start2++];
        printf("%d, %d\n", arr[start1], arr[start2]);
    while (start1 <= end1)
        reg[k++] = arr[start1++];
        printf("%d, %d\n", arr[start1], arr[start2]);
    while (start2 <= end2)
        reg[k++] = arr[start2++];
        printf("%d, %d\n", arr[start1], arr[start2]);
    for (k = start; k <= end; k++)
        arr[k] = reg[k];
}
void merge_sort(int arr[], const int len) {
    int reg[len];
    merge_sort_recursive(arr, reg, 0, len - 1);
}