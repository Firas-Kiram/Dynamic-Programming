#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
#define MP make_pair
#define pb push_back
#define pi pair<ll,ll>
#define F first
#define S second
#define OUTRET(...) { OUT(__VA_ARGS__); return; }
#define OUT(...) cout << __VA_ARGS__ << '\n'
#define F0R(i, a, b) for (int i=a; i<(b); i++)
#define FOR(i, a) for (int i=0; i<(a); i++)
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define sz(v) ((int)((v).size()))
#define ln '\n'
const ll INF = 1000000000;
const ll MOD = 1000000007;
const ll M = 1e6 + 8432;
const int N= 200005;
const ll EPS = 1e-5;
vector<ll> adj[M];
ll dp[M];

ll dfs(ll node){
    if(adj[node].size() == 0)
        return 0;
    if(dp[node] != -1)
        return dp[node];
    ll c = -1e9;
    for(auto i : adj[node]){
            c = max(c,dfs(i)+1);
    }
    return dp[node] = c;
}

void solve(){

    ll n,m;
    cin >> n >> m;  
    memset(dp,-1,sizeof(dp));
    while(m--){
        ll a,b;cin >> a >> b;
        adj[a].pb(b);
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        ans = max(dfs(i),ans);
    }
    cout << ans << ln;
}           

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T = 1;
    //cin >> T;
    while (T--) {
        solve();
    }
 
    return 0;
}   
