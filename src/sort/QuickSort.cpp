//
// @author anlewy@qq.com
// @create 2021/2/21 6:50 下午
//

#include "sort.h"
#include "algorithm"

int doSplit(int *arr, int left, int right);
void quickSort(int *arr, int left, int right);

void quickSort(int *arr, int n) {
    quickSort(arr, 0, n);
}

void quickSort(int *arr, int left, int right) {
    if (left >= right)
        return;
    int m = doSplit(arr, left, right);
    quickSort(arr, left, m);
    quickSort(arr, m+1, right);
}

int doSplit(int *arr, int left, int right) {  // [left, right)左闭右开区间
    int rec = arr[left];
    int i = left, j = right;
    // 每次循环开始时，[left, i)的一定是<=rec的，[j, right)一定是>=rec的。当i >= j时，
    while (i < j) {
        while (i < j && arr[--j] >= rec) ;
        std::swap(arr[i], arr[j]);
        while (i < j && arr[++i] <= rec) ;
        std::swap(arr[i], arr[j]);
    }
    return i;
}