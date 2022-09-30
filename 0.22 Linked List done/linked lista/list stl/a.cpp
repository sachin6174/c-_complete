#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> demo_list;

    int p;
    char t;
        cin>>t;
    // cin>>p;
    for (int  i = 0; t !='n'; i++)
    {
        cout<<"want next element or not : ";
        cin>>t;
    if(t=='n')
      {break;}  
else{
    cin>>p;
      demo_list.push_back(p);
}
    
    }


cout<<endl;
      for (auto itr = demo_list.begin(); itr != demo_list.end(); itr++)
        cout << *itr << " ";
    return 0;
}