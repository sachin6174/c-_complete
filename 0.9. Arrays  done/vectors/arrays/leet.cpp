#include <iostream>
//2,147,483,647
using namespace std;
#include<bits/stdc++.h>

class Solution {
public:

void twoSum(vector<int> nums, int target) {
        // vector<int> Sum;
        int l=0;
       for(int i=0;i<nums.size()-1;i++) {
           
           for(int j=1;j<nums.size();j++){
               if((nums[i]+nums[j])==target){
                   l++;
                   if(l<2){cout<<"["<<i<<","<<j<<"]"<<endl;}
                   

                    // Sum.push_back(i);
                   // Sum.push_back(j);
               }
  
           }
       }
        
        // cout<<"["<<i<<","<<"j"<<"]";
    }


   
};

//  void twoSum(vector<int> nums, int target) {
//         // vector<int> Sum;
//         int l=0;
//        for(int i=0;i<nums.size()-1;i++) {
           
//            for(int j=1;j<nums.size();j++){
//                if((nums[i]+nums[j])==target){
//                    l++;
//                    if(l<2){cout<<"["<<i<<","<<j<<"]"<<endl;}
                   

//                     // Sum.push_back(i);
//                    // Sum.push_back(j);
//                }
  
//            }
//        }
        
//         // cout<<"["<<i<<","<<"j"<<"]";
//     }

int main()
{
    Solution a;
    int target=6;
    vector<int> nums;
    // 2,7,11,15


    nums.push_back(3);
    nums.push_back(3);
    // nums.push_back(11);
    // nums.push_back(15);
    // nums.push_back(5);

    a.twoSum(nums,target);
    
    return 0;
}