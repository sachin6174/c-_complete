#include <vector>

template<typename T>class elem{
    public:

    T data;
    int priority;
    elem( T d,int p){
        this->data=d;
        this->priority=p;
    }
};

class PriorityQueue {
	vector<elem<string>> pq;

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

	void insert(elem element) {
		pq.push_back(element);
		
		int childIndex = pq.size() - 1;

		while(childIndex > 0) {
			int parentIndex = (childIndex - 1) / 2;

			if(pq[childIndex].priority < pq[parentIndex].priority) {
				elem temp = pq[childIndex];
				pq[childIndex] = pq[parentIndex];
				pq[parentIndex] = temp;
			}
			else {
				break;
			}
			childIndex = parentIndex;
		}

	}

	int removeMin() {
		if(isEmpty()) {
			return 0;		// Priority Queue is empty
		}
		elem ans = pq[0];
		pq[0] = pq[pq.size() - 1];
		pq.pop_back();

		// down-heapify

		int parentIndex = 0;
		int leftChildIndex = 2 * parentIndex + 1;
		int rightChildIndx = 2 * parentIndex + 2;
	
		while(leftChildIndex < pq.size()) {
			int minIndex = parentIndex;
			if(pq[minIndex] > pq[leftChildIndex]) {
				minIndex = leftChildIndex;
			}
			if(rightChildIndx < pq.size() && pq[rightChildIndx] < pq[minIndex]) {
				minIndex = rightChildIndx;
			}
			if(minIndex == parentIndex) {
				break;
			}
			int temp = pq[minIndex];
			pq[minIndex] = pq[parentIndex];
			pq[parentIndex] = temp;
		
			parentIndex = minIndex;
			leftChildIndex = 2 * parentIndex + 1;
			rightChildIndx = 2 * parentIndex + 2;
		}

		return ans;



	}
	
};


int main() {
    PriorityQueue pq;
   string k="s";
   for (int i = 9; i >=1; i--){
       string name=k+char(i+'0');
       elem<string> l(name,i);
       pq.insert(l,v);
   }
    print(v);

   elem<string> r("kk",0);
   elem<string> r1("kk",-1);
   elem<string> r2("kk",0);
   insert(r,v);
   insert(r1,v);
   insert(r2,v);
   
    print(v);
    // cout<<k1;
}