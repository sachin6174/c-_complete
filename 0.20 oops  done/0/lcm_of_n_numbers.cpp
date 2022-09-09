#include <iostream>
using namespace std;

void lcm(int a[],int n){
    if (n==0){ return;}
    if (n==1){ return;}
    int k= (a[0]>=a[1]) ? a[0]:a[1];
    int l=n;
    int p=0;
    for (int i =k;p<1; i++)//jab hame pata ho kaha tak loop chalana hai to um fo loop use karte hai na
    {
        
        // iter++;
       if (k%a[0]==0 &&  k%a[1]==0)
            {   
                 cout<<k<<endl; 
                p++;
             }
       k++;
       l--;
    }
    lcm(a+1,n-1);
}

int main()
{
    int n;cin>>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    lcm(a,n);
    
     
    
    
    return 0;
}