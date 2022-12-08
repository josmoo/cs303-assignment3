#pragma once
#include <queue>
using namespace std;
template <typename type> class Queue2 : public queue<type> {
public:
	void move_to_rear();
};

