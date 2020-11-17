#include "gtest/gtest.h"
#include "rectangle.hpp"
#include "test_suites.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
