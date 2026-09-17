#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define vin(v) for(auto &x:v) cin>>x;
#define vout(v) for(auto x:v) cout<<x;
#define all(v) v.begin(), v.end()
#define FILL(a, x) memset(a, x, sizeof(a))
#define ll long long
#define ull unsigned long long
 
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INF INT_MAX
#define MX 1000010
#define FR(i, n) for(int i=0; i<n; i++)
#define FOR(i, n) for(int i=1; i<=n; i++)
 
const double Pi=acos(-1);
using namespace std;
void solve(){
    int n;
    cin >> n;
    ll ans = 0, bns = -1000000000;
    vector< pair<ll, ll> > vec(n);
    for(auto &[x, y]: vec) cin >> x;
    for(auto &[x, y]: vec) cin >> y;
    for(auto [x, y]: vec) {
        ans += max(x, y);
        bns = max(bns, min(x, y));
    }
    cout << ans + bns << "
";
}
int main() {
    Fast
    int tst=1;
    cin >> tst;
    for(int T=1; T<=tst; T++){
        //cout << "Case " << T << ": ";
        solve();
    }
}
 