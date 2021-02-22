#include <iostream>
#include "include/algos.h"
#include "gtest/gtest.h"
using namespace std;


TEST(TestCase,test2){
    int arr[6] = {6, 0, 1, -9, 12, -88};
    mergeSortV2(arr, 6);
    cout << "hello word!" << endl;
    for (int i = 0; i < 6; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "hello word!" << endl;
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);  // //将命令行参数传递给gtest
    return RUN_ALL_TESTS();  // //RUN_ALL_TESTS()运行所有测试案例
}
