
#include <iostream>
using namespace std;
#include<vector>

int main() {
    int t;
    cin>>t;
    int x;
    vector<string>v;
    for(int i=0;i<t;i++)
    {
        cin>>x;
       
          switch(x%4){
            case 1:
            cout<<"East"<<endl;
            v.push_back("East");
            break;
            case 2:
            cout<<"South"<<endl; 
            v.push_back("South");
            break;
            case 3:
            cout<<"West"<<endl;
            v.push_back("West");
            break;
            case 0:
            cout<<"North"<<endl;
             v.push_back("North");
            break;
            
        }
        
    }
    
    for(int i=0;i<t;i++){
        cout<<v.at(x); 
    }
   
  
    
	return 0;
}
