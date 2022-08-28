#include<bits/stdc++.h>
using namespace std;
int main(){

   int a[]={1,2,55,6,8,9,3,7,9,3,7,0,23,5,78};
   int k=5;// window size
   int arrsize=15;


    int mini=INT_MAX;
   int maxi=INT_MIN;
   int sum=0;
   for(int i=0,j=k-1;i<arrsize-k+1;i++,j++){
        if(i==0){
            for(int z=0;z<k;z++){
                sum+=a[z];
            }
        }else{
            sum=sum+a[j]-a[i-1];
        }

      for(int z=i;z<j+1;z++){
            if(z==j){
                cout<<a[z];
                break;
            }
                cout<<a[z]<<"+";

        }
        cout<<"="<<sum<<endl;

    maxi=max(maxi,sum);
    mini=min(mini,sum);
   }
   cout<<"max "<<maxi<<endl;
   cout<<"min "<<mini<<endl;
  return 0;
}


/*


#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]={1,2,55,6,8,9,3,7,9,3,7,0,23,5,78};
   int k=3;// window size


   
   int arrsize=15;
   int maxi=INT_MIN;
   int sum=0;
   for(int i=0,j=k-1;i<arrsize-k+1;i++,j++){
        if(i==0){
            for(int z=0;z<k;z++){
                sum+=a[z];
            }
        }else{
            sum=sum+a[j]-a[i-1];
        }
        for(int z=i;z<j+1;z++){
            if(z==j){
                cout<<a[z];
                break;
            }
                cout<<a[z]<<"+";

        }
        cout<<"="<<sum<<endl;
    maxi=max(maxi,sum);
   }
   cout<<maxi<<endl;
  return 0;
}

*/