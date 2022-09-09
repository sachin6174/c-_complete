#include <map>
void intersection(int *arr1, int *arr2, int n, int m) 
{
    //Write your code here
    map<int, int> my_map; 
    for(int i =0;i<n;i++){
        my_map[arr1[i]]=0;
        my_map[arr1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(my_map[arr2[i]]>0){
            my_map[arr2[i]]--; 
            cout<<arr2[i]<<" ";
        }
        
    }
	
}