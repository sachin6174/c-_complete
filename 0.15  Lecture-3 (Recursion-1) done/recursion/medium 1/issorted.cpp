#include <iostream>
//2,147,483,647
using namespace std;

bool is_sorted(int *a, int n){
    if(n==0||n==1){ return true; }  // if(n==0||n==1) is right statment if(n==0||1) wrong syntax


    // aaise condition choose karna jisse wo aage jai
        /*

        ye galat hai kyu ki agar agar statement sahi hua to function khatam ho jaiga 
        aage walo ke lie check karega hi nahi 
    if(a[0]<a[1]){
        return true;
    }


        */

    // cout<<" " <<a[0]<<" "<<a[1];   

    if(a[0]>a[1]){
        return false;
    }
    return is_sorted(a+1,n-1);
}



int main()
{
    int a[]={1,2,3,4,1};
    int n=5;
    cout<<is_sorted(a,n);
    return 0;
}