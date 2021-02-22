//
// @author anlewy@qq.com
// @create 2021/2/21 12:30 下午
//

#ifndef ALGORITHMTEMPLATE_SEARCH_H
#define ALGORITHMTEMPLATE_SEARCH_H


int binarySearch(const int *arr, int n, int target);
int binarySearch(const int *arr, int left, int right, int target);

int lowerBound(const int *arr, int n, int target);
int lowerBound(const int *arr, int left, int right, int target);

int upperBound(const int *arr, int n, int target);
int upperBound(const int *arr, int left, int right, int target);

#endif //ALGORITHMTEMPLATE_SEARCH_H
