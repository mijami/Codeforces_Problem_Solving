#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,a,b;
        cin >> n >> k >> a >> b;
        vector<pair<ll, ll> >vec;
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin >> x >> y;
            vec.pb(make_pair(x,y));
        }
        if(a<=k && b<=k)
        {
            cout <<"0
";
            continue;
        }
        ll zercost=999999999999;
        ll fincost=999999999999;
        ll dircost=abs(vec[b-1].first-vec[a-1].first) + abs(vec[b-1].second-vec[a-1].second);
        if(a<=k)
        {
            zercost=0;
        }
        if(b<=k)
        {
            fincost=0;
        }
        for(int i=0;i<n;i++)
        {
            if(i<k)
            {
                zercost=min(zercost, abs(vec[i].first-vec[a-1].first) + abs(vec[i].second-vec[a-1].second) );
                fincost=min(fincost, abs(vec[i].first-vec[b-1].first) + abs(vec[i].second-vec[b-1].second) );
            }
 
        }
        ll ans=min((zercost+fincost),dircost);
        cout << ans << "
";
 
 
 
    }
 
 
 
    return 0;
 
}