#include <iostream>
#include <stdio.h>
// compile://g++ test_code.cpp
// run://a.exe < input.txt > output.txt
#include <bits/stdc++.h>
#define ll long long
#define vec vector
#define ar array
// just Throw hash map
// Pick the global decleration
// delete the dynamic allocation
// os_base::sync_with_stdio(0);
// cin.tie(0);
using namespace std;

template <typename T>
class node
{
public:
    T value;
    T *next ;
    node(){
        next=NULL;
    }
};

void my_machine()
{
}

ll int myhash(string data)
{

    int i = 0;
    ll int return_value = 0;
    while (i < data.size())
    {
        return_value = return_value + data[i] * pow(7, (data.size() - i));
        i++;
    }

    return return_value;
}

node<string> *buccket[100] = {NULL};

void sha_2k21(string data)
{

    int location = myhash(data) % 100;
    if (buccket[location] == NULL)
    {

        node<string> *k = new node<string>;
        k->value = data;
        buccket[location] = k;
    }

    else
    {

        node<string> *address = buccket[location];
        node<string> *k = new node<string>;

        while (address != NULL)
        {
            address = address->next;
        }
        address->next = k;
        address->value=data;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string k;
    cin >> k;
    // cout<<myhash(k);
    sha_2k21(k);

    return 0;
}