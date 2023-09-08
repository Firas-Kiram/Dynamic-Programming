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
const int N= 5e5+10;
const ll EPS = 1e-5;
char v[1001][1001];
ll dp[1001][1001];
int n,m;
        
ll add(ll a,ll b,ll m){
    return (a%m+b%m)%m;
}

ll grid(int i,int j){

    if(i == n-1 && j == m-1){
        return 1;
    }

    if(dp[i][j]!=-1)
        return dp[i][j];

    ll res = 0;

    if(j+1<m&& v[i][j+1]=='.') res = add(res,grid(i,j+1),MOD);
    if(i+1<n&&v[i+1][j] == '.') res = add(res,grid(i+1,j),MOD);

    return dp[i][j] = res;
}

void solve(){

    cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dp[i][j] = -1;
        }
    }
    cout << grid(0,0) << ln;

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
