//
// @author WuJiaWen 
// @create 2021/2/20 6:39 下午
//

#include "sort.h"

// 归并排序（递归版）
void mergeSort(int *arr, int n) {
    int *tmp = new int[n];
    doSort(arr, 0, n, tmp);
}

// 只给一个区间排序
void mergeSort(int *arr, int left, int right) {
    mergeSort(arr+left, right-left);
}

void doSort(int *arr, int left, int right, int *tmp) {  // 左闭右开区间
    if (right-left <= 1) { // right-left是子数组的长度
        return;
    }
    doSort(arr, left, (left+right)/2, tmp);
    doSort(arr, (left+right)/2, right, tmp);
    doMerge(arr, left, (left+right)/2, right, tmp);
}

void doMerge(int *arr, int left, int mid, int right, int *tmp) {
    int i = left, j = mid, cur = left;
    while (i < mid && j < right) {
        if (arr[i] <= arr[j]) {
            tmp[cur] = arr[i];
            cur++, i++;
        } else {
            tmp[cur] = arr[j];
            cur++, j++;
        }
    }
    while (i < mid) {
        tmp[cur] = arr[i];
        cur++, i++;
    }
    while (j < right) {
        tmp[cur] = arr[j];
        cur++, j++;
    }
    for (int k = left; k < right; k++) {
        arr[k] = tmp[k];
    }
}
