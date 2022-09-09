#include <iostream>
#include <climits>
#include <cstring>
#include <string>
#include <vector>
#include <utility> //contains the pair stl
#define endl '\n'  // this is opposite of typedef
using namespace std;
typedef long long ll; // are used for data types
typedef vector<int> vi;
typedef pair<int, int> pi;
#include <stdint.h>
// macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

int len_ofstr(char *a)
{
    // using loop
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}
int Rlen_ofstr(char *a)
{  // using recursion 
    cout<<a[0];
    if(a[0]=='\0'){
        return 0;
    }

    return Rlen_ofstr(a+1)+1;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[] = "sachin";
    cout << s << " " << s + 1 << endl;
    cout << strlen(s) << " " << strlen(s + 1) << endl;
    cout << len_ofstr(s) << " " << len_ofstr(s + 1) << endl;
    cout << Rlen_ofstr(s) << endl << Rlen_ofstr(s + 1) << endl;

    return 0;
}