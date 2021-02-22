//
// @author WuJiaWen 
// @create 2021/2/22 11:26 上午
//

#include "sort.h"

void hillSort(int *arr, int n) {
    int len[3] = {n/2, 4, 1};
    for (int step = n/2; step > 0; step /= 2) {
        for (int start = 0; start < step && start < n; ++start) {
            for (int i = start, j; i < n; i += step) {
                int rec = arr[start];
                for (j = i-step; j >= 0 && arr[j] > arr[i]; j -= step) {
                    arr[j+step] = arr[j];
                }
                arr[j+step] = rec;
            }
        }
    }
}