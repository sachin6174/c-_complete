#include <iostream>
// #include<numeric>
using namespace std;


int lcm2no(int a , int b)
{
    int lcm=0;
    int l=0;
    int m=min(a,b);
    for (int i = m; l<1; i++)
    {
        if (i%a==0&& i%b==0)
        {
            lcm=i;
            l++;

        }
        
    }
    
return lcm;
}



int lcm(int a[],int n,int t){

if(n==1){ return -1; }
if(n==2){ return lcm2no(a[0],a[1]); }

int p=lcm2no(a[0],a[1]);

int smalloutput=lcm(a+1,n-1,p);
return lcm2no(p,smalloutput);

}





int main()
{

    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }


   int t=a[0];
    cout<<lcm(a,n,t);

    


    return 0;
}