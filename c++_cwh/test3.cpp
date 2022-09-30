class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>two_sum;
        unordered_map<int,int>m;
       for(int i=0;i<n;i++){
           if(m[target-nums[i]]>0){
               two_sum.push_back(i);
               two_sum.push_back(m[target-nums[i]]-1);
               return two_sum;
           }
           else{
               m[nums[i]]=i+1;
           }
       }
        return two_sum;
    }
};