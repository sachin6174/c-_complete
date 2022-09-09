#include <iostream>
using namespace std;

class Test {
    public:
    int a=5;
	Test() { cout << "Constructor of Test " << endl; }
	~Test() { cout << "Destructor of Test " << endl; }
};

int main()
{
	try {
		Test t1;
		throw t1;
	}
	catch (Test i) {
		cout << "Caught " << i.a << endl;
	}
}