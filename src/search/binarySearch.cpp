//
// @author anlewy@qq.com
// @create 2021/2/20 5:09 下午
//

#include "search.h"

int binarySearch(const int *arr, int n, int target) {
    return binarySearch(arr, 0, n, target);
}

int lowerBound(const int *arr, int n, int target) {
    return lowerBound(arr, 0, n, target);
}

int upperBound(const int *arr, int n, int target) {
    return upperBound(arr, 0, n, target);
}


// 左闭右开区间
int binarySearch(const int *arr, int left, int right, int target) {
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (target < arr[mid]) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return -1;  // 跳出while循环，没有找到目标值，返回-1
}

// 查找可以插入target的第一个位置，也即第一个大于等于target的位置
int lowerBound(const int *arr, int left, int right, int target) {
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

// 查找可以插入target的下一个位置，也即第一个大于target的位置
int upperBound(const int *arr, int left, int right, int target) {
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}