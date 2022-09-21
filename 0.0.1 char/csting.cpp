#include<bits/stdc++.h>
// #include<cstring>
using namespace std;



int main(){
   char a[]="sachin";
   char b[100];
    strcpy(b,a);
    cout<<b<<endl;

   cout<<sizeof(a)<<endl;
//    cout<<strlen(a)<<endl;
    int len=0;
    for(int i=0;a[i]!='\0';i++){
        len++;
    }    
    cout<<len<<endl;
  return 0;
}
