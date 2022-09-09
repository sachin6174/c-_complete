#include <iostream>
using namespace std;

void takeinput(int array[], int n)// this should be like this int array[]
{
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }    
}

void printarray(int array[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<< "  ";
    } 
}

void selection_sort(int array[], int n){
        int min= array[0];

for(int j=1;j<n;j++){
    for(int i=0;i<n;i++){
        if(min>array[i])
        {
            min=array[i];
            cout<<endl;
        }

    }
}
printarray( array, n);
}


void selectionusingswap(int array[], int n){
for (int j  = 1; j < n; j++)
        {for (int  i = 0; i < n; i++)
        {
            if(array[0]>=array[i])
            {
                int temp=array[0];
                array[0]=array[i];
                array[i]=temp;
            }
        }
        }
  printarray( array, n);      
cout<<"kuch gadbad hai"<<endl;
}



int main()

{
    int n;
    cin>>n;
    int array[n];
    takeinput(array,n);
    printarray(array,n);
    cout<<endl;
    selection_sort(array,n);
    cout<<endl;
    selectionusingswap(array,n);
    return 0;
}