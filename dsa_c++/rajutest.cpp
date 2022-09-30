#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;

        char name[T][10];

        for (int i = 0; i < T; i++){
		cin >>name[i];
        }

        for (int i = 0; i < T; i++){
            for (int j = 0; j < 10; j++){

        if (name[i][j]==name[i+1][j])
        {
            cout<<"OH SHIT"; 
            return 0;
        }
        else
        {
            cout<<"ALL IZZ WELL";
            return 0;
        }
        }
        }   
    return 0;
}

// C++ program to demonstrate array of strings using
// 2D character array
// #include <iostream>

// int main()
// {
// 	// Initialize array of pointer
// 	const char *colour[4] = { "Blue", "Red",
// 							"Orange", "Yellow" };

// 	// Printing Strings stored in 2D array
// 	for (int i = 0; i < 4; i++)
// 		std::cout << colour[i] << "\n";

// 	return 0;
// }

// C++ program to demonstrate array of strings using
// 2D character array
// #include <iostream>

// int main()
// {
// 	// Initialize 2D array
// 	char colour[4][10] = { "Blue", "Red", "Orange",
// 						"Yellow" };

// 	// Printing Strings stored in 2D array
// 	for (int i = 0; i < 4; i++)
// 		std::cout << colour[i] << "\n";

// 	return 0;
// }

