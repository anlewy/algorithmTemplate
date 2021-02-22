//
// @author WuJiaWen 
// @create 2021/2/20 6:40 下午
//

#include "sort.h"

inline int min(int x, int y) {
    return x <= y ? x : y;
}

// 归并排序（迭代版）
void mergeSortV2(int *arr, int n) {
    int step = 1;
    int *tmp = new int[n];
    while (step < n) {
        int left = 0;
        while (left < n) {
            doMerge(arr, left, left+step, min(left+2*step, n), tmp);
            left += 2*step;
        }
        step *= 2;
    }
}

