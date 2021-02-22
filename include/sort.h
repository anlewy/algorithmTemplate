//
// @author anlewy@qq.com
// @create 2021/2/21 12:17 下午
//

#ifndef ALGORITHMTEMPLATE_SORT_H
#define ALGORITHMTEMPLATE_SORT_H

// 冒泡排序
void bubbleSort(int *arr, int n);

// 简单选择排序
void selectSort(int *arr, int n);

// 插入排序
void insertSort(int *arr, int n);

// 希尔排序
void hillSort(int *arr, int n);

// 归并排序（递归版）
void mergeSort(int *arr, int n);
void doSort(int *arr, int left, int right, int *tmp);
void doMerge(int *arr, int left, int mid, int right, int *tmp);

// 归并排序（迭代版）
void mergeSortV2(int *arr, int n);

// 快速排序
void quickSort(int *arr, int n);

// 堆排序
void heapSort(int *arr, int n);

#endif //ALGORITHMTEMPLATE_SORT_H
