// C++ program to demonstrate cin.get()

#include <iostream>
using namespace std;

int main()
{
	char name[25];
	cin.get(name, 3);// only two characters will be taken  and last space is for null character
	cout << name;

	return 0;
}


// C++ program to demonstrate cin.get()

// #include <iostream>
// using namespace std;

// int main()
// {
// 	char name[100];
// 	cin.get(name, 3);
// 	cout << name;

// 	return 0;
// }
