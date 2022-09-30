#include <iostream>
//2,147,483,647
using namespace std;
// merge sort is a recursive algorithum


 void mergetwosorted(int *a,int start,int mid,int end){
    //  int mid=(start+end)/2;
     int i=0;
     int j=mid;
     int k=0;
     int c[end+1];
     
     int sizeofa=mid-start+1;
     int sizeofb=end-(mid+1)-1;
     while (i<sizeofa&&j<sizeofb)
     {
        if (a[i]<a[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=a[j];j++;k++;

        }
     }
     while(i<sizeofa){
         c[k]=a[i];i++;k++;
     }
     while(j<sizeofb){
         c[k]=a[j];i++;k++;
     }
     for (int i = 0; i < end+1; i++)
     {
        a[i]=c[i];
     }
     
    // cout<<c


 }
 void mergesort(int *a,int start, int end){
    
     if(start<=end){
         return ;
     } 
     int mid=(start+end)/2;
     mergesort(a,start,mid);
     mergesort(a,mid+1,end);
    mergetwosorted(a,start,mid,end);


 }



int main()
{
    int a[]={4,2,6,8,2};
    int start=0;
    int end=4;
    // int mid =(start+end)/2;
    mergesort(a,start,end);

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}