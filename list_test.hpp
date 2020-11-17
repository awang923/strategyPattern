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
#include "selectionSort.hpp"


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
   Base* three = new Op(3);
   ListContainer* lc = new ListContainer();
   lc->add_element(one);
   lc->add_element(two);
   lc->add_element(three);
   lc->swap(0,2);
   EXPECT_EQ(lc->at(0)->evaluate(),3);
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

TEST(SortTestSet, SelectionSortTest){
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Mult* TreeA = new Mult(seven, four);

    Op* three = new Op(3);
    Op* two = new Op(2);
    Add* TreeB = new Add(three, two);

    Op* ten = new Op(10);
    Op* six = new Op(6);
    Sub* TreeC = new Sub(ten, six);

    ListContainer* container = new ListContainer();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);
    
   // Sort* ss = new SelectionSort(container);
    container->set_sort_function(new selectionSort());
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}
#endif //LIST_TEST_HPP
