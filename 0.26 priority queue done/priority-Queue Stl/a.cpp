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


class comp{
    public:
    bool operator()(pair<int,int>p1,pair<int,int>p2) {
    return p1.first>p2.first;
}
};



int main() {
    //s->0  //e->1   greater<pair<int,int>>
    stack<pair<int,int>>s;
    priority_queue<pair<int,int>,vector<pair<int,int>>,comp> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        pair<int,int>p;
        int a,b;
        cin>>a>>b;
        p={a,0};
        pq.push(p);
        p={b,1};
        pq.push(p);
    }

    while(!pq.empty()){
        s.push(pq.top());
        pq.pop();
    }
int current=0;
int maxi=0;
    while(!s.empty()){
        pair<int,int>p=s.top();
        if(p.second==0){
            current++;
        }else{
            current--;
        }


        maxi=max(maxi,current);
    }
}