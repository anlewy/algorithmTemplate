//
// @author anlewy@qq.com
// @create 2021/2/21 12:54 下午
//

#include <iostream>
#include "algos.h"
#include "gtest/gtest.h"
#include <algorithm>

int *buildArr(int n) {
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = ((i * i)%13 * i) % 23 + (i * i * i) % 123 + (i * i) % 97;
    }
    return arr;
}

bool testSorted(const int *arr, int n, void (*sortFunc)(int *, int)) {
    int *brr = new int[n];
    int *crr = new int[n];
    for (int i = 0; i < n; i++) {
        brr[i] = arr[i];
        crr[i] = arr[i];
    }
    std::sort(brr, brr+n);
    sortFunc(crr, n);
    for (int i = 0; i < n; i++) {
        if (brr[i] != crr[i])
            return false;
    }
    return true;
}

TEST(TestCase, testBubbleSort) {
    std::cout << "\nin testBubbleSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, bubbleSort));
}

TEST(TestCase, testSelectSort) {
    std::cout << "\nin testSelectSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, selectSort));
}

TEST(TestCase, testInsertSort) {
    std::cout << "\nin testInsertSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, insertSort));
}

TEST(TestCase, testHillSort) {
    std::cout << "\nin testHillSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, hillSort));
}


TEST(TestCase, testMergeSort) {
    std::cout << "\nin testMergeSort:\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, mergeSort));
}


// test mergeSortV2
TEST(TestCase, testMergeSortV2){
    std::cout << "\nin testMergeSortV2:\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, mergeSortV2));
}

// test quickSort
TEST(TestCase, testquickSort) {
    std::cout << "\nin testquickSort:\n";
    const int n = 600;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, quickSort));
}

// test heapSort
TEST(TestCase, heapSort) {
    std::cout << "\nin testHeapSort:\n";
    const int n = 600;
    int *arr = buildArr(n);
    EXPECT_EQ(true, testSorted(arr, n, heapSort));
}

int main() {
    return RUN_ALL_TESTS();  // //RUN_ALL_TESTS()运行所有测试案例
}