#include <iostream>
using namespace std;

void lcmofnums(int a[], int n, int lcm){
    if (n==0){ }
    if (n==1){ }
    int p=0;
    for(int i=0;p<1;i++){
        int r;
   if(lcm%(a[0])==0 && lcm%(a[1])==0)
            {
                r=lcm;
                cout<<lcm;
       p++;
             }
             lcmofnums(a+1,n-1,r);
    }
    
    
    cout <<lcm<<endl;

}

int main()
{
    int n;
    cin >>n;
    int a[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int lcm= (a[0]>=a[1]) ? a[0]: a[1];
   lcmofnums(a,n-1,lcm);
    
    return 0;
}