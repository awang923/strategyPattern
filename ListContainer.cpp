#include "ListContainer.hpp"
#include <iostream>
#include <iterator>
#include <list>
#include <exception>
#include "base.hpp"

using namespace std;

//ListContainer::ListContainer(){
  // items.clear();
//}
void ListContainer::add_element(Base* element){
   items.push_back(element);
}

void ListContainer::print(){
   for (auto it = items.begin(); it != items.end(); it++){
     cout << (*it)->stringify() << endl;
   }
}

void ListContainer::sort(){
   if (sort_function == nullptr){
//	throw out_of_range("ERROR");
	cout << endl;
   }
}

void ListContainer::swap(int i,int j){
   list<Base*>::iterator a = items.begin();
   while (i!=0){
	a++;
	i--;
   }
   list<Base*>::iterator b = items.begin();
   while (j!=0){
	b++;
	j--;
   }

   Base* temp = *a;
   *a = *b;
   *b = temp;
}

Base* ListContainer::at(int i){
   list<Base*>::iterator it = items.begin();
   while (i!=0){
     it++;
     i--;
   }
   Base* ans = *it;
   return ans;    
}

int ListContainer::size(){
   return items.size();
}
