#include<bits/stdc++.h>
using namespace std;
int main(){
   
   int a[]={1,2,3,6,-6,7,-9,4,1,2,4,-1,3,6,-4,-3};
   int k=3;// window size

   // we will deal with index of first negative number
   int arrsize=16;

//    int firsti=-1;
//    int secondi=-1;
    queue<int>q;
   for(int i=0,j=k-1;i<arrsize-k+1;i++,j++){

        
        if(i==0){
            for(int z=0;z<k;z++){
                if(a[z]<0){
                    q.push(z);
                }
            }
        }else{
            if(q.front()==(i-1)){
                q.pop();
            }
            if(a[j]<0){
                q.push(j);
            }

        }


        //window 
            for(int z=i;z<=j;z++){
                cout<<a[z]<<" ";
            }

        cout<<"= ";
        if(q.size()==0){
            cout<<0<<endl;
        }else{
            cout<<a[q.front()]<<endl;
        }
   }

  return 0;
}
