//
// @author WuJiaWen 
// @create 2021/2/22 11:05 上午
//

#include "sort.h"
#include <algorithm>

void selectSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {  // i 的含义是循环开始前已排好序的个数，同时也是这轮循环要正确排序的下标
        int maxP = i;
        for (int j = i+1; j < n; ++j) {
            if (arr[maxP] > arr[j])
                maxP = j;
        }
        std::swap(arr[maxP], arr[i]);
    }
}