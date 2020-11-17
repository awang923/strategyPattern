#include "gtest/gtest.h"

#include "ListContainer.hpp"
#include "list_test.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
