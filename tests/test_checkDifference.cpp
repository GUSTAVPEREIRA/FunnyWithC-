#include "../src/Uri1007/Difference.h"
#include <gtest/gtest.h>

using namespace std;

TEST(CheckDifference, RegularCheckDifferenceWhenIsNegative) {
    auto expectedResult = -26;

    Difference difference(5, 6, 7, 8);

    auto result = difference.checkDifferenceOfProduct();

    ASSERT_EQ(expectedResult, result);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}