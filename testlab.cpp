#include "gtest/gtest.h"
#include "func.h"

using namespace std;

TEST(gTest, ReturnValue) {
    int arr [4] = {3,5,1,-6};
    ASSERT_EQ(9, Sum(arr,4));
    ASSERT_TRUE( 9 ==Sum(arr,4));
}
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}