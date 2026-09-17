#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int n,m;
    cin >> n >> m;
    vector<ll>vec;
    map<ll,int>mp;
    int cand;
    for(int j=1; j<=m; j++)
    {
        ll ma=-5;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            if(x>ma)
            {
                ma=x;
                cand=i+1;
            }
        }
 
        mp[cand]++;
        if(mp[cand]==1)
        {
            vec.pb(cand);
        }
    }
    ll cnt=0;
    ll ans;
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        if(mp[vec[i]]>cnt)
        {
            cnt=mp[vec[i]];
            ans=vec[i];
        }
 
    }
    cout << ans << "
";
 
 
    checkmate
}