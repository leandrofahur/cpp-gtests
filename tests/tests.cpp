#include "gtest/gtest.h"
#include "../include/math.h"

TEST(square_root_test, positive_numbers)
{
    EXPECT_EQ(2.0, square_root(4.0));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}