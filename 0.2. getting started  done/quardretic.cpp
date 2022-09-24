#include<bits/stdc++.h>
using namespace std;
int main(){
   double a,b,c;
   cin>>a>>b>>c;
   double d=(double)b*b-(double)4*a*c;
   cout<<"root1= ("<<-1*b<<"+ sqrt("<<d<<") )/2"<<endl;
   cout<<"root2= ("<<-1*b<<"- sqrt("<<d<<") )/2"<<endl;
  return 0;
}
