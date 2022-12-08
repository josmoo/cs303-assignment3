#pragma once
#include "queue2.h"
template <typename T>
void Queue2<T>::move_to_rear() {
	if (!this->empty()) { //if it isn't empty
		 this->push(this->front()); //add a copy of the first value to the end of the queue
		 this->pop();//remove the copy at the beginning of the queue
	}
}

