#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
    string a;
    // cin>>a;
    getline(cin,a);
    vector<char>v;
    // if('s'<200){
    //     cout<< true<<endl;
    //     cout<<int(a[0])<<endl;// given ascai
    // }

    int arr[256]={0};
    for (auto i = 0; i < a.size(); i++)
    {
        arr[int(a[i])]++;
    }
    for (auto i = 0; i < 256; i++)
    {
        if (arr[i]==*max_element(arr,arr+256))
        {
            v.push_back(char(i));
        }
        
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    // int a='a';
    
    

    return 0;
}