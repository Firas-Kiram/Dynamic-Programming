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
#define all(x) (x).begin(), (x).end()
#define yes cout<<"YES"<<ln;
#define no cout<<"NO"<<ln;
#define sz(v) ((int)((v).size()))
#define ln '\n'
const ll INF = 1000000000;
const ll MOD = 1073741824;
const ll M = 1e6 + 8432;
const int N= 5e5+10;
const ll EPS = 1e-5;

void solve(){

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    vector<ll> dp(n+1,INF);
    for(int i=0;i<n;i++) cin >> v[i];
    dp[0] = 0;
    
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=i+k;j++){
            if(j<n){
                dp[j] = min(dp[j],dp[i]+abs(v[i]-v[j]));
            }
        }
    }
    cout << dp[n-1] << ln;
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
