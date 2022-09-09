#include <iostream>
using namespace std;

// int lcm(a[],n)
// {   
//     if (a[i]/i==0)
// }

int main()
{
    // int n;
    // cin>>n;
    // int a[n];
    // for (int  i = 0; i < n; i++)
    // {
    //     cin>>a[i];
        
    // }

    // int p;

    
    // for (int i = 1; i < n+1; i++)
    //     {
    //         a[i]*a[]
    //     }
    
    int a;int b;
    cin>>a>>b;
    /*
    int k;
    if(a>=b){k=a;}
    if(b>a){k=b;}
    */
   int k= (a>=b) ? a:b;// ye kuch aaise chalta hai ki if a>=b to store a in k else store b in k

    int iter=0;
    int p=0;
    for (int i =k;p<1; i++)//jab hame pata ho kaha tak loop chalana hai to um fo loop use karte hai na
    {
        
        iter++;
       if (k%a==0 &&  k%b==0)
            {
                cout<<k<<endl; 
                p++;
             }
       k++;
    }
    
    
cout<<endl<<iter<<endl;

    return 0;
}