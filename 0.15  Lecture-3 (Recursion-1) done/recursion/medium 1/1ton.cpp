#include <iostream>
//2,147,483,647
using namespace std;

void f(int n){
    if(n==1){
        cout<<n;
        return;
        
    }

    f(n-1);// all calls made first then abhi sari printing nahi hui 
    
    cout<<" "<<n;
    int p;
    cin>>p;
    cout<<"   function" <<n << "idhar aaya tha   ";
}
// void f2(int n){//wrong way to think  thnk again it should work
//     if(n==n){
//         cout<<n;
//         return;
//     }
//     cout<<1<<" ";
//     f2(n-1);
// }
void  f3(int n){

    if(n==1){
        cout<<n;
        return;
    }

    cout<<n<<" ";
    
    f3(n-1);// sari printing yeha par ho chuki hai
      int p;
    cin>>p;
    cout<<"   function" <<n << "idhar aaya tha   ";
}


int main()
{
    f(5);
    cout<<endl;
    f3(5);
    return 0;
}