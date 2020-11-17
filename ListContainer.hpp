#ifndef LIST_CONTAINER_HPP_
#define LIST_CONTAINER_HPP_

#include <list>
#include "container.hpp"
#include "base.hpp"

using namespace std;

class ListContainer: public Container{
//   private:
//	list<Base* >items;
   public:
//	ListContainer();
	list<Base* >items;
	virtual void add_element(Base* element);
	virtual void print();
	virtual void sort();
	virtual void swap(int i, int j);
	virtual Base* at(int i);
	virtual int size();
};
#endif //LIST_CONTAINER_HPP_
