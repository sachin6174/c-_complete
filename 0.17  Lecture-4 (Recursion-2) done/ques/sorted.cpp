#include <iostream>
#include <climits>
#include <vector>
#include <utility> //contains the pair stl
#define endl '\n'// this is opposite of typedef
using namespace std;
typedef long long ll;// are used for data types
typedef vector<int> vi;
typedef pair<int,int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP 
bool itrans(int *a,int n){
    int i=0;
    while(a[i]>a[i+1]&&n>=1){
        cout<<a[i]<<endl;// feel like avaliable here to manupulate
        return false;
        n--;
        i++;
    }
    return true;

}

int no;

bool f(int *a,int n){
    no++;
    if(n<=1){
        return true;
    }
    if(a[0]>a[1]){
        return false;//uss function ko jisne tumhe call kia hai
    }
    return f(a+1,n-1);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a[5]={3,2,3,4,5};
    cout<<(f(a,0)); //n ki value 0 par false

    cout<<endl<<no<<endl<<endl;

    cout<<itrans(a,0)<<endl;

    return 0;
}