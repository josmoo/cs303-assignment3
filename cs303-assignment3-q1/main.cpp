#include "queue2.cpp"
#include <iostream>


int main() {
	Queue2<int> q;
	for (int i = 0; i < 5; i++) { //fill our queue2
		q.push(i);
	}
	cout << "the queue contains 0, 1, 2, 3, 4\n\n";
	cout << "before running move_to_rear, value at front: " << q.front() << ", and value at back:" << q.back() << endl << endl;
	q.move_to_rear();
	cout << "after  running move_to_rear, value at front: " << q.front() << ", and value at back:" << q.back() << endl << endl;

	return 0;
}