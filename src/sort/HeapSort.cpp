//
// @author anlewy@qq.com 
// @create 2021/2/22 4:07 下午
//

#include "sort.h"
#include <algorithm>

void buildMaxHeap(int *arr, int n);
void sinkMaxHeap(int *arr, int n, int cur);

void heapSort(int *arr, int n) {
    buildMaxHeap(arr, n);
    for (int i = n-1; i > 0; --i) {
        std::swap(arr[0], arr[i]);
        sinkMaxHeap(arr, i, 0);
    }
}

void buildMaxHeap(int *arr, int n) {
    for (int p = n/2; p >= 0; --p) {
        sinkMaxHeap(arr, n, p);
    }
}

void sinkMaxHeap(int *arr, int n, int cur) {
    // 左子：2*(cur+1)-1，右子：2*(cur+1)
    while (2*(cur + 1) - 1 < n) {
        int i = 2*(cur + 1) - 1;
        if (i+1 < n && arr[i+1] > arr[i])
            i = i+1;
        if (arr[cur] < arr[i]) {
            std::swap(arr[cur], arr[i]);
            cur = i;
        } else {
            break;
        }
    }
}