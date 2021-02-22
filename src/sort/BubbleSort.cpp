//
// @author anlewy@qq.com
// @create 2021/2/22 10:50 上午
//

#include "sort.h"
#include <algorithm>

void bubbleSort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            if (arr[j] < arr[j-1]) {
                std::swap(arr[j], arr[j-1]);
            }
        }
    }
}