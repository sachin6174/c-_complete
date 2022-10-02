#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int>mymap;
        for(int i=0;i<nums.size();i++){
            mymap[nums[i]]++;
        }
        cout<< mymap[0]<<" ";
        // cout<< mymap[1]<<" ";
        // cout<<mymap[2]<<endl;
         for(int j=0;j<mymap.size();j++){// why here can not be j=1;
            // cout<< mymap[0]<<" ";
            //   cout<<"a";
            //   cout<<mymap[j]<<endl;
            if((mymap[j])>1){
               
                v.push_back(j); 
            }
        }
        // cout<<v[2]<<endl;
       return v; 
    }
};

int main()
{
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(2);
    Solution a;
    for (int i = 0; i < (a.findDuplicates(nums)).size() ; i++)
    {
        // cout<<(a.findDuplicates(nums))[i]<<" ";
    }
    

    return 0;
}