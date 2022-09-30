/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45,}
using namespace std;
#include<bits/stdc++.h>


 //Definition for singly-linked list.
 struct ListNode {
      int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* head1=l1;
        vector<int>v1;
        
        ListNode* head2=l2;
        vector<int>v2;
                
        vector<long long int>*v3;
        
        while(head1!=NULL){
            
            v1.push_back(head1->val);
            head1=head1->next;
        }
         while(head2!=NULL){
            
            v2.push_back(head2->val);
            head2=head2->next;
        }
        int a=min(v1.size(),v2.size());
        int b=max(v1.size(),v2.size());
        if(v1.size()>v2.size()){
            for(int i=a;i<b-1;i++){
            v2.push_back(0);
            }
        }
        
        if(v1.size()<v2.size()){
            for(int i=a;i<b-1;i++){
            v1.push_back(0);
            }
        }
        
        int r=0;
        for(int i=0;(v1[i]+v2[i]+r)>=0;i++){
            (*v3).push_back((v1[i]+v2[i]+r)%10);
            r=(v1[i]+v2[i]+r)/10; 
        }
        (*v3).push_back(r);
        // reverse(v3.begin(),v3.end());
        ListNode* address=NULL;
        
        for(int i=(*v3).size();i>=0;i--){
            ListNode* last=new ListNode ((*v3)[i],address);
            address=last;
        }
         
       return address;    
    }
};

int main()
{
    
    Solution a;

    list<int>l1(7,9);
    list<int>l2(4,9);
    // a.addTwoNumbers(&l1,&l2);

    return 0;
}
