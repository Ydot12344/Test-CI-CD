#include "gtest/gtest.h"

TEST(TestGroupName, Subtest_1) {
  ASSERT_TRUE(1 == 0);
}

int main(int argc, char **argv) {
    int a = 0;
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



