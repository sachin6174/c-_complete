// // Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.

// // template <class Type, class Container = deque<Type> > class stack;

// Type – is the Type of element contained in the std::stack. It can be any valid C++ type or even a user-defined type.

// Container – is the Type of underlying container object.


/*
stack::top() in C++ STL
stack::empty() and stack::size() in C++ STL
stack::push() and stack::pop() in C++ STL
stack::swap() in C++ STL
stack::emplace() in C++ STL
Recent Articles on C++ Stack
*/


// Member Types:-

// value_type- The first template parameter, T. It denotes the element types.

// container_type- The second template parameter, Container. It denotes the underlying container type.

// size_type- Unsigned integral type.
  
// The functions associated with stack are: 
// empty() – Returns whether the stack is empty – Time Complexity : O(1) 
// size() – Returns the size of the stack – Time Complexity : O(1) 
// top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
// push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
// pop() – Deletes the top most element of the stack – Time Complexity : O(1) 


// #include <iostream>
// #include <stack>
// using namespace std;
// int main() {
//     stack<int> stack;
//     stack.push(21);
//     stack.push(22);
//     stack.push(24);
//     stack.push(25);
     
//          stack.pop();
//     stack.pop();
 
//     while (!stack.empty()) {
//         cout << ' ' << stack.top();
//         stack.pop();
//     }
// }
// Output
//  22 21
// Code Explanation:

// Include the iostream header file or <bits/stdc++.h> in our code to use its functions.
// Include the stack header file in our code to use its functions if already included <bits/stdc++.h> then no need of stack header file because it has already inbuilt function in it.
// Include the std namespace in our code to use its classes without calling it.
// Call the main() function. The program logic should be added within this function.
// Create a stack to store integer values.
// Use the push() function to insert the value 21 into the stack.
// Use the push() function to insert the value 22 into the stack.
// Use the push() function to insert the value 24 into the stack.
// Use the push() function to insert the value 25 into the stack.
// Use the pop() function to remove the top element from the stack, that is, 25. The top element now becomes 24.
// Use the pop() function to remove the top element from the stack, that is, 24. The top element now becomes 22.
// Use a while loop and empty() function to check whether the stack is NOT empty. The ! is the NOT operator.
// Printing the current contents of the stack on the console.
// Call the pop() function on the stack.
// End of the body of the while loop.
// End of the main() function body.