#include <iostream>
//2,147,483,647
using namespace std;

int first(int a[],int const & x,int start,int end)
{
    
while (start<=end){
    int mid =start + (end-start)/2;
if(a[mid]==x){   return mid; }
else if(a[mid]>=x){   end=mid-1; }
else {   start=mid+1; }

}
return -1;
}


int last(int a[],int const & x,int start,int end)
{
  
while (start<=end){
 int temp; 
//     int l=-1;
int mid =start + (end-start)/2;
if(a[mid]==x){ temp=mid;
                
                          }
else if(a[mid]>=x){   end=mid-1; }
else {   start=mid+1; }
    return temp;

}
return -1;
}



int main()
{
    int a[]={1,2,4,4,4,6 ,7};
    int x=4;
    int start =0;
    int end=(sizeof (a)/sizeof(int ))-1;

    cout<<first(a,x,start,end)<<endl;
    cout<<last(a,x,start,end)<<endl;



    
    return 0;
}