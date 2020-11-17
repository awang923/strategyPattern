#ifndef LIST_TEST_HPP_
#define ADD_TEST_HPP_

#include "gtest/gtest.h"
#include "op.hpp"
#include "add.hpp"
#include "base.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "ListContainer.hpp"

TEST(listTest, printElement){
   Base* one = new Op(1);
   ListContainer* lc = new ListContainer();
   lc->add_element(one);
   EXPECT_EQ(lc->size(), 1);
}

TEST(listTest, twoElement){
   Base* one = new Op(1);
   Base* two = new Op(2);
   ListContainer* lc = new ListContainer();
   lc->add_element(one);
   lc->add_element(two);
   EXPECT_EQ(lc->at(0)->evaluate(),1);
}

TEST(listTest, noElement){
   ListContainer* lc = new ListContainer();
   EXPECT_EQ(lc->size(), 0);
}

TEST(listTest, swapElement){
   Base* one = new Op(1);
   Base* two = new Op(2);
   ListContainer* lc = new ListContainer();
   lc->add_element(one);
   lc->add_element(two);
   lc->swap(0,1);
   EXPECT_EQ(lc->at(1)->evaluate(),1);
}

TEST(listTest, otherHpp){
   Base* one = new Op(1);
   Base* two = new Op(2);
   ListContainer* lc = new ListContainer();
   lc->add_element(one);
   lc->add_element(two);
   Base* add = new Add(one,two);
   lc->add_element(add);
   EXPECT_EQ(lc->at(2)->evaluate(), 3);
}
#endif //LIST_TEST_HPP
