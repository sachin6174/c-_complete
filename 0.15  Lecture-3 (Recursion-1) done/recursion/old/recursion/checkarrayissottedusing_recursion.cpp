#include <iostream>
using namespace std;

bool sorted2(int array[], int size)
{
    if (size == 0 ||size == 1)
    {
        return true;//true means 1// false means 0
    }
    bool smallsorted=sorted(array+1,size-1);
    if(!smallsorted){
        return false;
    }
    if(array[0]>array[1]){ return false; }
    else{return true;}
}


bool sorted(int array[], int size)//remembre array is pointer here
{
    if (size == 0 ||size == 1)
    {
        return true;//true means 1// false means 0
    }
    if(array[0]>array[1]){ return false; }
    bool smallsorted=sorted(array+1,size-1);
    return smallsorted;
    /*
    {
    int a[]={1,2,3,4,5} ;
    cout<<a<<endl;
    cout<<(a+1)[0]<<endl;// iska matlab ki array ab 1 st element se suru hoga aur usme ab n-2 elements hi bachenge

    return 0;
}
    */

}

int main()
{
    int n;
    cin>>n;
    int k[n];
    for(int i=0;i<n;i++)
    { cin>>k[i];}
    cout<<sorted(k,n);
    return 0;
}