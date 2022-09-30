#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>
#include<algorithm>

int main()
{
     vector<int> v;
     vector<int>final;
    int a[]={9,2,3,4,4,5,6,7};
    int n =sizeof(a)/sizeof(int);//sizeofa

    int b[]=      {1,2,3,4,9};
    int m=sizeof(b)/sizeof(int);//sizeofb
    int r=0;
    int i = 0;
    for (; i < n; i++)
    {
        v.push_back((a[n-1-i]*b[m-1]+r)%10);

        r=(a[n-1-i]*b[m-1]+r)/10;
        // cout<<r<<endl;
    }
    if(r!=0){
    v.push_back(r);
    }
   

  reverse(v.begin(),v.end());

   for (int i = 0; i < v.size(); i++)
   {
      cout<< v.at(i);
   }
   
    
    return 0;
}