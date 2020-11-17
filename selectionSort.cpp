#include "selectionSort.hpp"
#include <iostream>

using namespace std;
void selectionSort::sort(Container* container) {
	for(int i = 0; i < container->size(); i++) {		
	int min = i;
		
		for(int j = i + 1; j < container->size(); j++) {
		if(container->at(min)->evaluate() > container->at(j)->evaluate()) {
			min = j;
		}
		}
		
		container->swap(min, i);
	}
}
