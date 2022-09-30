#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>

#include<unordered_map>

void dome(int* a,unordered_map<bool,int >map1,vector<int >l,int sizeofarray){
    for (int i = 0; i < sizeofarray ; i++)
    {
        // cout<<map1.count(*(a+i))<<endl;
        if(map1.count(*(a+i))>=1)
            continue;
            // vb++;
        map1[*(a+i)]=true;
        l.push_back(*(a+i));
      
     

  
    }
    // cout<<"size of l after getting out of loop: "<<l.size()<<endl;
    for(int j=0;j<l.size();j++)
{        cout<<l[j]<<" ";
}  

}
 
int main()
{
    unordered_map<bool,int >map1;  
    vector<int >l;

    int a[]={2,4,4,4,5,67,7,8,8,8,9};
    int sizeofarray=(sizeof(a)/sizeof(int));
    cout<<sizeofarray<<endl;
// int vb=0;
   
    // cout<<vb<<endl;

    dome(a,map1,l,sizeofarray);

  
    
    return 0;
}