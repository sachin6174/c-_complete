#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>

void all_index(int * a, int n, int x,vector <int> &v ){

    if(n==0){
        return;
    }

    all_index(a+1,n-1,x,v);
    if(x==a[0]){
        v.push_back(a[0]);

    }

// return me hi thora takhlif hai void to aur mast hota hai
}
void all_index2(int * a, int n, int x,vector <int> &v ){

    if(n==0){
        return;
    }
    int temp=a[n-1];
    all_index(a,n-1,x,v);
    if(x==temp){
        v.push_back(a[0]);

    }

// return me hi thora takhlif hai void to aur mast hota hai
}

int main()
{
    int a[] = {1, 1, 2, 3, 2, 1, 1};
    int n = 7;
    vector<int> v;
    
   all_index2(a, n, 1, v);
   cout<<v.size();

    
    return 0;
}