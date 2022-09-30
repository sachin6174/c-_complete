#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    vector <int >v;
    // int n;

    int a[]={1, 2 ,3 ,4, 5};


    int *p= a;
    for (int i = 0; i < 3; i++)
    {
        // partial_sum(*p+*(p+1),*(p+2));
        

    // vector <int >v2;
    // v2.push_back(*p);
    // v2.push_back(*(p+1));
    // v2.push_back(*(p+2));

    int temp= accumulate(p,(p+3),0);//accumulate(a, a+n, initial_sum);
    // v2.pop_front (v2[i]);
        v.push_back( (*p+*(p+1)+*(p+2)));
        p=p+1;


    }
    // cout<<v.at(0);
    // cout<<v.at(1);
    // cout<<v.at(2);

    cout<<*max_element(v.begin(),v.end());

    
    return 0;
}

// #include <iostream>
// using namespace std;
// #include <bits/stdc++.h>


// int main()
// {
//     int a[]={1, 2 ,3 ,4, 5};

//     cout<<partial_sum(*a,*(a+5),(a+3));
//     return 0;
// }