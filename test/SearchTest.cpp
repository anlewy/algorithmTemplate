//
// @author anlewy@qq.com
// @create 2021/2/21 2:08 下午
//

#include "algos.h"
#include "gtest/gtest.h"
using namespace std;

TEST(testCase, testBinarySearch) {
    int arr[7] = {0, 2, 3, 3, 3, 6, 88};
    int ret;
    ret = binarySearch(arr, 7, 34);
    EXPECT_EQ(-1, ret);
    ret = binarySearch(arr, 7, 6);
    EXPECT_EQ(5, ret);
}

TEST(testCase, testLowerBound) {
    int arr[7] = {0, 2, 3, 3, 3, 6, 88};
    int ret;
    ret = lowerBound(arr, 7, 34);
    EXPECT_EQ(6, ret);
    ret = lowerBound(arr, 7, 3);
    EXPECT_EQ(2, ret);
    ret = lowerBound(arr, 7, 89);
    EXPECT_EQ(7, ret);
}

TEST(testCase, testUpperBound) {
    int arr[7] = {0, 2, 3, 3, 3, 6, 88};
    int ret;
    ret = upperBound(arr, 7, 34);
    EXPECT_EQ(6, ret);
    ret = upperBound(arr, 7, 3);
    EXPECT_EQ(5, ret);
    ret = upperBound(arr, 7, 89);
    EXPECT_EQ(7, ret);
}



int main() {

    return RUN_ALL_TESTS();
}