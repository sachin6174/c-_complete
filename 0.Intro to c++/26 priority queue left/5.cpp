#include <vector>

class PriorityQueue {
	vector<int> pq;

	public :

	PriorityQueue() {

	}

	bool isEmpty() {
		return pq.size() == 0;
	}

	// Return the size of priorityQueue - no of elements present
	int getSize() {
		return pq.size();
	}

	int getMin() {
		if(isEmpty()) {
			return 0;		// Priority Queue is empty
		}
		return pq[0];
	}

};
$10-worth New Year Gift for You
Make your 2022 productive
with LINER Premium

Dismiss
Open the gift