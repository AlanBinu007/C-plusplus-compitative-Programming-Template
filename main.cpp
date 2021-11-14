#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
void dbg_out() { cerr << endl; }
#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x<< " = " <<x<<endl;
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define pb(x) push_back(x)
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rep(n) for(int i=0; i<n; i++)
#define repj(n) for(int j=0; j<n; j++)
#define arrsize(n) sizeof(n) / sizeof(n[0])
#define beignend(n) n.begin(), n.end()
#define rep2(m,n) for(int i=m; i<n; i++)
#define repj2(m,n) for(int j=m; j<n; j++)
#define eql(v) equal(v.begin() + 1, v.end(), v.begin())

#define PI 3.1415926535897932384626433832795l 

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

 
#define SHUF(v) shuffle(all(v), RNG); 

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    #endif
}

void solve() {

    int x1, x2, y1, y2, m, n,pos, pos1;
    std::vector<int> v;
    cin>>m>>n>>pos>>pos1;
    if(pos ==1 && pos1 >= 1){
        x1 = n; 
        y1 = 1;
        x2 = n;
        y2 = n;
    }
    if(pos ==m && pos1 >= 1){
        x1 = 1; 
        y1 = 1;
        x2 = n;
        y2 = n;
    }
    if(pos1 ==1 && pos >= 1){
        x1 = 1; 
        y1 = n;
        x2 = n;
        y2 = n;
    }
    if(pos1 ==m && pos >= 1){
        x1 = 1; 
        y1 = 1;
        x2 = n;
        y2 = 1;
    }
    if(pos >1 && pos1 > 2){
        x1 = 1; 
        y1 = 1;
        x2 = n;
        y2 = 1;
    }


    cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
}

int main() {

    init_code();
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin>>tc;
    while (tc--) {
        solve();
    }

    //solve();
}
