#include<bits/stdc++.h>
using namespace std;

template <class T>
class Comparator { // we pass an object of this class as
				// third arg to sort function...
public:
	bool operator()(T x1, T x2)
	{
		return x1 < x2;
	}
};

template <class T> bool funComparator(T x1, T x2)
{ // return type is bool
	return x1 <= x2;
}


int main(){
   vector<int> v1(10);// will create a array of 10 size wit all elements as zero
    for(auto ele:v1)
        cout<<ele<<" ";
    cout<<endl;

    vector<int> v2(10,-1);// will create a array of 10 size wit all elements as -1
    for(auto ele:v2)
        cout<<ele<<" ";
    cout<<endl;

    //void* memset( auto* str, val,sizeof(str) ); // memset
    // sizeof(arr)   // arr can be matrix or vector
    vector<int> v3={1,2,3,4,5,6};
    cout<<accumulate(v3.begin(),v3.end(),0);// 0 here is initaial sum
    cout<<endl;
    cout<<*(max_element(v3.begin(),v3.end())); // it returns the address of largest element of array
    cout<<*(min_element(v3.begin(),v3.end())); // it returns the address of smallest element of array
    cout<<endl;
    auto it =v3.begin(); // auto keyword can be used at place of iterator decleration
    //v3.begin() returns the address of first element of array
    vector<int> :: iterator it=v3.end();
    // v3.end() return address of end of last element of array
    sort(v3.begin(),v3.end(),greater<int>());
    reverse(v3.begin(),v3.end());
    v3.back();// return last element of vector
    v3.front();// return first element of array
    v3.erase(v3.begin(),v3.begin()+2);// first argument inclusive second one exclusive
    v3.erase(v3.begin()+2);// remove emement at 2nd index
    v3.size();//return size of array
    v3.at(5);// return element at index 5
    v3.push_back(4);// append 4 at last of array
    v3.pop_back();// remove last element of array
    v3.clear();// remove all elements of the array



 
}