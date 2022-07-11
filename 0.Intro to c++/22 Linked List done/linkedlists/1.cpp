//First Simple Linked List in C Let us create a simple linked list with 3 nodes.

#include <bits/stdc++.h>
using namespace std;

//we know how a class is created in c++>>
class Node {
public:
	int data;//it is lust a variable decleared of name data (of int type )
	Node* next;//it is just a decleared pointer variable with name next
};

// Program to create a simple linked
// list with 3 nodes
int main()
{
	Node* head = NULL;
    cout<<head<<endl;//if pointer is pointed to null it will retun address as 0
	Node* second = NULL;
    cout<<second<<endl;//if pointer is pointed to null it will retun address as 0
	Node* third = NULL;
    cout<<third<<endl;//if pointer is pointed to null it will retun address as 0

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	/* Three blocks have been allocated dynamically.
	We have pointers to these three blocks as head,
	second and third	
	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+-----+	 +----+----+	 +----+----+
	| # | # |	 | # | # |	 | # | # |
	+---+-----+	 +----+----+	 +----+----+
	
# represents any random value.
Data is random because we haven’t assigned
anything yet */

	head->data = 1; // assign data in first node
	head->next = second; // Link first node with
	// the second node

	/* data has been assigned to the data part of first
	block (block pointed by the head). And next
	pointer of the first block points to second.
	So they both are linked.

	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +----+----+	 +-----+----+
	| 1 | o----->| # | # |	 | # | # |
	+---+---+	 +----+----+	 +-----+----+	
*/

	// assign data to second node
	second->data = 2;

	// Link second node with the third node
	second->next = third;

	/* data has been assigned to the data part of the second
	block (block pointed by second). And next
	pointer of the second block points to the third
	block. So all three blocks are linked.
	
	head		 second		 third
		|			 |			 |
		|			 |			 |
	+---+---+	 +---+---+	 +----+----+
	| 1 | o----->| 2 | o-----> | # | # |
	+---+---+	 +---+---+	 +----+----+	 */

	third->data = 3; // assign data to third node
	third->next = NULL;

	/* data has been assigned to the data part of the third
	block (block pointed by third). And next pointer
	of the third block is made NULL to indicate
	that the linked list is terminated here.

	We have the linked list ready.

		head	
			|
			|
		+---+---+	 +---+---+	 +----+------+
		| 1 | o----->| 2 | o-----> | 3 | NULL |
		+---+---+	 +---+---+	 +----+------+	
	
	
	Note that only the head is sufficient to represent
	the whole list. We can traverse the complete
	list by following the next pointers. */

    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl<<endl;

    cout<<head<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
	return 0;
}