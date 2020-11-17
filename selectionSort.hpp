#ifndef SEL_SORT_HPP_
#define SEL_SORT_HPP_

#include "sort.hpp"
#include "iostream"
#include "container.hpp"
#include <iostream>

using namespace std;

class selectionSort:public Sort{
   public:
	selectionSort() {}
	virtual void sort(Container* container);
};
#endif //SEL_SORT_HPP_
