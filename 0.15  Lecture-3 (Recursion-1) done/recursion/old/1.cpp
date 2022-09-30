#include <iostream>
//2,147,483,647
using namespace std;
#include<vector>


void insert (int a[],int n,int p[],int temp1){

  for (int i = 0; i < n-1; i++)
{
  p[i]=a[i];
}

  for (int  i = 0; i < n-1; i++)
    {
       
       if (a[i]<=temp1)
       {
         p[i]=a[i];
       }
       
       
        if (temp1<a[i])
        {
          // int te=;
          p[i]=temp1;
         temp1=a[i];  
        }
        // a[n-1]=max(a[i],b[0]);
    }
  p[n]=temp1;
}

void fun (int  a[],int n,int p[]){
// cout<<int(&n)<<" for "<< n<<endl;
if(n==1){return;}


   
int temp1= a[n-1];
// cout<<temp<<endl;
fun(a,n-1,p);      
// int l=temp1;


insert(a,n-1,p,temp1);

}

int main()
{

    int a[]={1,2,5,3,7,3,50,7};
    int n=sizeof(a)/sizeof(int);
int p[100] ;

    // int n;cin>>n;
    fun(a,n,p);

    for (int  i = 0; i < n; i++)
    {
       
      cout<<p[i]<<" ";
        
    }
    return 0;
}