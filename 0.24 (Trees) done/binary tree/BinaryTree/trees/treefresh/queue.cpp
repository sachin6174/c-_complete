//#include <iostream>
#include<stdio.h>
//compile://g++ test_code.cpp
//run://a.exe < input.txt > output.txt
#include<bits/stdc++.h>
#define ll  long long
#define vec vector  
#define ar array  
//just Throw hash map
//Pick the global decleration
//delete the dynamic allocation
//os_base::sync_with_stdio(0); 
//cin.tie(0);  
using namespace std;

void my_machine(){

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // creating queue object
    queue<int> myqueue;

    //adding elements in queue// performs operation
    myqueue.push(5);
    myqueue.push(10);
    myqueue.push(5);
    myqueue.push(15);
    myqueue.push(5);

    //removing element from queue // first element got removed// performs operation
    myqueue.pop();

    // to check if that queueis empty// it will return bool value 
    cout<<myqueue.empty()<<endl;

    //to get first element // it return the first element
    cout<<myqueue.front()<<endl;

    // to get last element of queue// it is also a return type method or function
    cout<<myqueue.back()<<endl;
    
    return 0;
}