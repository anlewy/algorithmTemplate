//
// @author WuJiaWen 
// @create 2021/2/22 11:17 上午
//

#include "sort.h"

void insertSort(int *arr, int n) {
    for (int i = 0, j; i < n; i++) {
        int rec = arr[i];
        for (j = i-1; j >= 0 && arr[j] > rec; --j) {
            arr[j+1] = arr[j];
        }
        arr[j+1] = rec;
    }
}