#include<bits/stdc++.h>
using namespace std;
void *pv;   // okay
int *pint; int i=222;
int main() {
   pv = &i;
   // Cast optional in C required in C++
   pint = (int *)pv;// we are putting a general address in in pointer so need to do typecast
    cout<<*pint<<endl;
}