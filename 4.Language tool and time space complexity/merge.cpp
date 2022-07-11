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



void merge(int *a,int s1,int e1,int *b,int s2,int e2) {
    int size=e1-s1+e2-s2+2;
    int s=s1;
    int e=e2;
    int *c=new int [size]{0};
    int k=0;
    while(s1<=e1&& s2<=e2){
        if(a[s1]<a[s2]){
            c[k++]=a[s1++];
        }else{
            c[k++]=b[s2++];
        }
    }
    while(s1<=e1){
        c[k++]=a[s1++];
    }
    while(s2<=e2){
        c[k++]=b[s2++];
    }
    for(int i=0;i<=e2;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    for(int i=s,l=0;i<=e;i++,l++){
        a[i]=c[l];
    }
    delete[]c;                                     
}

int main() {
    int a[9]={1,4,7,9,10,0,3,6,12};
    // int b[4]={};
    merge(a,0,4,a,5,8);
    for(int i=0;i<9;i++) cout<<a[i]<<" ";
}