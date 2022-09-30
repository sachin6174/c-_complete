#include <iostream>
//2,147,483,647
using namespace std;
#include<algorithm>
#include<climits>
//0 1  knap sack recursive code code
int knapsack(int *wt,int n,int *val,int W){

if(n==0||W==0){
    return 0;
}

if(wt[n-1]<=W){
    return max(val[n-1]+knapsack(wt,n-1,val,W-wt[n-1]),knapsack(wt,n-1,val,W));
}

else if(wt[n-1]>W){
   return  knapsack(wt,n-1,val,W);
}

return INT_MAX;

}

int main()
{
    int wt[]={1,3,4,5};
    int val[]={1,3,4,5};
    int n=sizeof(wt)/sizeof(int);
    int W=7;
   cout<< knapsack(wt,n,val,W);
    return 0;
}