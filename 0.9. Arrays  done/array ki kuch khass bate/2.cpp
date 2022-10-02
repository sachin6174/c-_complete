#include <iostream>
using namespace std;

int main()
{
    int a[4]={5,1,2,6};//4 size ka array
    // int p=-1;
    // cout<<a[4]<<endl<<endl;
    int ans=0;

for (int  i = 0; i < 4; i++)
{

    if (a[i]>a[i+1])// asal me ye samajh jaiga ki k[4] is aimaginary element aur 4th loop(i=3 wali loop) challegi hi nahi
    {
        int temp = a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
        ans++;
        

    }    
}
    cout<<ans<<endl;
    // cout<<a[4]<<endl<<endl;

    // a[4]=-1;

int g=0;
for (int i = 0; 1>0; i++)//infinite barr task ho raha hota hai to segmentation fault aata hai  not a error (it is memory )
{
    cout<<a[i]<< " ";
    g++;
    
}
cout<<endl<<endl<<g<<endl;


}