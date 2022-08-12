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

template<typename T>

class elem{
    public:

    T data;
    int priority;
    elem( T d,int p){
        this->data=d;
        this->priority=p;
    }
};
void print(vector<elem<string>>&v){
    for(int i=0;i<v.size();i++){
       cout<<v[i].data<<" "<<v[i].priority<<"     ";
   }
   cout<<endl;
}
int k1=0;
void insert(elem<string> e,vector<elem<string>>&v) {
    v.push_back(e);
    
    int ci=v.size()-1;
    // print(v);
    while(ci!=0){
        int pi=(ci-1)/2;
        if(v[pi].priority>v[ci].priority){
            swap(v[pi],v[ci]);
            // k1++;
        }
        // print(v);
        ci=pi;
    }
    
}

int main() {
   vector<elem<string>>v;

   string k="s";
   for (int i = 9; i >=1; i--){
       string name=k+char(i+'0');
       elem<string> l(name,i);
       insert(l,v);
   }
    print(v);

   elem<string> r("kk",0);
   elem<string> r1("kk",-1);
   elem<string> r2("kk",0);
   insert(r,v);
   insert(r1,v);
   insert(r2,v);


    print(v);
    // cout<<k1;
}