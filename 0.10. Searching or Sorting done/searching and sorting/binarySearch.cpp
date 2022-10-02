#include <iostream>
//2,147,483,647
//non sorted
//a[]={2,6,1,6,8,3,6,2,6,0,4,-2}
//sorted 
//a[]={-5,-4,2,4,6,8,9,12,45}
using namespace std;
#include<algorithm>

int  binarySearch1st_from_start(int const *a,int  start,int  end,int x){
    // int b;
    // a=&b;
    // cout<<&a;
    // cout<<&a[0];
    // a[0]=8;
    int mid;
    while (start<=end){
         mid =start+(end-start)/2;
        // int mid=(start+end)/2;
        if(a[mid]==x){
            return mid;
        }
        if(x>a[mid]){
            start=mid+1;
        }
        if(x<a[mid]){
            end=mid-1;
        }

    }
    return -1;
}
// void  binarySearch1st_all(int const *a,int  start,int  end,int x){
//     // int b;
//     // a=&b;
//     // cout<<&a;
//     // cout<<&a[0];
//     // a[0]=8;

//     while (start<=end){
//         int mid =start+(end-start)/2;
//         // int mid=(start+end)/2;
//         if(a[mid]==x){
//             cout<< mid<<" ";
//             if((a[mid+1])==x){
//                 cout<<mid<<" ";
//                 mid++;
//             }else{
//                 return;
//             }
//         }
//         if(x>a[mid]){
//             start=mid+1;
//         }
//         if(x<a[mid]){
//             end=mid-1;
//         }

//     }
//     cout<< "-1";
// }


int  binarySearch_last_index(int const *a,int  start,int  end,int x){
    // int b;
    // a=&b;
    // cout<<&a;
    // cout<<&a[0];
    // a[0]=8;

    while (end<=start){
        int mid =start+(end-start)/2;
        // int mid=(start+end)/2;
        if(a[mid]==x){
            return mid;
        }
        if(x>a[mid]){
            end=mid+1;
        }
        if(x<a[mid]){
            start=mid-1;
        }

    }
    return -1;
}

int main()
{   int a[]={-5,-4,2,4,6,6,8,9,12,45};
    // cout<<&a<<endl;
    // cout<<&a[0]<<endl;
    int n=sizeof(a)/sizeof(int);
    int x=6;
    cout<<binarySearch1st_from_start(a,0,n-1,x);
    cout<<endl;
    cout<<binarySearch_last_index(a,n-1,0,x);//end becomes start and start becomes end
    cout<<endl;
    // binarySearch1st_all(a,0,n-1,x);//end becomes start and start becomes end
    return 0;
}