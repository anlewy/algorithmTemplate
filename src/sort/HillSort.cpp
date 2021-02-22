//
// @author anlewy@qq.com
// @create 2021/2/22 11:26 上午
//

#include "sort.h"

void hillSort(int *arr, int n) {
    for (int step = n/2; step > 0; step /= 2) {
        for (int i = step, j; i < n; ++i) {
            int rec = arr[i];
            for (j = i-step; j >= 0 && arr[j] > rec; j -= step) {
                arr[j+step] = arr[j];
            }
            arr[j+step] = rec;
        }
    }
}