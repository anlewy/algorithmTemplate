//
// @author anlewy@qq.com
// @create 2021/2/21 12:54 下午
//

#include <iostream>
#include "algos.h"
#include "gtest/gtest.h"
using namespace std;

int *buildArr(int n) {
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = ((i * i)%13 * i) % 23 + (i * i * i) % 123 + (i * i) % 97;
    }
    return arr;
}

TEST(TestCase, testBubbleSort) {
    cout << "\nin testBubbleSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    bubbleSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}

TEST(TestCase, testSelectSort) {
    cout << "\nin testSelectSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    selectSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}

TEST(TestCase, testInsertSort) {
    cout << "\nin testInsertSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    insertSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

TEST(TestCase, testHillSort) {
    cout << "\nin testHillSort.\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    hillSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}


TEST(TestCase, testMergeSort) {
    cout << "\nin testMergeSort:\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    mergeSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}


// test mergeSortV2
TEST(TestCase, testMergeSortV2){
    cout << "\nin testMergeSortV2:\n";
    const int n = 200;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    mergeSortV2(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}

// test quickSort
TEST(TestCase, testquickSort) {
    cout << "\nin testquickSort:\n";
    const int n = 600;
    int *arr = buildArr(n);
    EXPECT_EQ(false, is_sorted(arr, arr+n));
    quickSort(arr, n);
    EXPECT_EQ(true, is_sorted(arr, arr+n));
}

int main() {
    return RUN_ALL_TESTS();  // //RUN_ALL_TESTS()运行所有测试案例
}