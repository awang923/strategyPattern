#ifndef TEST_SUITE
#define TEST_SUITE

#include "gtest/gtest.h"
#include "rectangle.hpp"

TEST(AreaTest, onenumArea ) {
 Rectangle* rect = new Rectangle(20,1);
  EXPECT_EQ(rect->area(),20);
}
TEST(AreaTest, twoNumArea ) {
 Rectangle* rect = new Rectangle(2,3);
  EXPECT_EQ(rect->area(),6);
}
TEST(AreaTest, zeroArea ) {
 Rectangle* rect = new Rectangle(0,0);
  EXPECT_EQ(rect->area(),0);
}
TEST(AreaTest, negArea){
  Rectangle* rect = new Rectangle(-5,5);
   EXPECT_EQ(rect->area(),0);
}


TEST(PerimeterTest, wholeNumPeri){
  Rectangle* rect = new Rectangle(1,1);
    EXPECT_EQ(rect->perimeter(), 4);
}
TEST(PerimeterTest, floatPointPeri){
  Rectangle* rect = new Rectangle(2.5,3);
   EXPECT_EQ(rect->perimeter(), 10);
}
TEST(PerimeterTest, zeroPeri){
  Rectangle* rect = new Rectangle(0,5);
   EXPECT_EQ(rect->perimeter(), 10);
}
TEST(PerimeterTest, negNumPeri){
  Rectangle* rect = new Rectangle(-5,5);
   EXPECT_EQ(rect->perimeter(), 0);
}
TEST(PerimeterTest, bigNumPeri){
  Rectangle* rect = new Rectangle(20,50);
   EXPECT_EQ(rect->perimeter(), 140);
}
TEST(PerimeterTest, negDecPeri){
  Rectangle* rect = new Rectangle(2,-1.5);
   EXPECT_EQ(rect->perimeter(), 0);
}


TEST(constructorTest, wholeNumCons){
  Rectangle* rect = new Rectangle(2,3);
    EXPECT_EQ(rect->perimeter(), 10);
}
TEST(constructorTest, emptyCons){
  Rectangle* rect = new Rectangle();
   EXPECT_EQ(rect->perimeter(), 0);
}

#endif //TEST_SUITE
