
#include<bits/stdc++.h>
using namespace std;
long long t,n,a,s,i,m;
int main() {
for(scanf("%I64d",&t); t--; printf("%I64d\n",max(m*n-s,s%n?n-s%n:0)),s=m=0)
for(scanf("%I64d",&n),i=n--; i--;) {
 scanf("%I64d",&a);
 s+=(m<a?m=a:a); } 
exit(0);
    }
