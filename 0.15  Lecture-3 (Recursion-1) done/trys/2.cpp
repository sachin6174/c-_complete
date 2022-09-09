#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int b[100]={0};
void mergesotred(int a[],int s1,int e1,int s2,int e2,int size){
    int  z=0;

    for(;z<size;z++){
        if(a[s1]<=a[s2]){
            b[z]=a[s1];
            s1++;
        }else{
            b[z]=a[s2];
            s2++;
        }
    }
    while(s1<e1){
        b[z]=a[s1];
        z++;
        s1++;

    }
    while(s2<e2){
        b[z]=a[s2];
        z++;
        s2++;
    }
    for(int z=0;)
}



void  sort(int a[],int s,int e,int size) {
   if(s==e){
       return;
   }
   int mid=(s+e)/2;
   sort(a,s,mid,size);
   sort(a,mid+1,e, size);
   mergesotred(a,s,mid,mid+1,e,size);
}
void sort(int a[],int n) {
   int s=0;
   int e=n-1;
   sort(a,s,e,n);
}

int main() {
    int a[]={1 ,4 ,8 ,2};
    sort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
}