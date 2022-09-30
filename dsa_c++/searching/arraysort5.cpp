#include <iostream>
using namespace std;
//just tell me last index of that num

int main()
{
    int n;        // number of elements of array
    cin >> n;     // value of n taken by the user
    int array[n]; //array declearation of n size

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    } // took elements of array by user
    cout << endl
         << endl;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << "\t";
    } // display what user put in elements
    cout << endl
         << endl;
    int k;    //decleraing which number to be searched
    cin >> k; // took no which need to be searched by user
    cout << endl
         << endl;
    int ans=0;
    for (int i = n-1; i > -1; i--)
    {
        if (array[i] == k)
        {
            if (ans==0)
        {
                cout << i << endl;
            ans++;
        }
        
            
        }
        
        

    } // // give me all index



//agar array[i] ka koi bhi element k se match nahi kia hoga to ans++ bhi ek bar bhi execute nahi hua hoga
// to agar ans loop ke bahar bhi zero hai to pakka wo element nahi hoga array me. 
        if(ans==0){
            cout<<"there is no such element in array."<<endl;
        }

    return 0;
}