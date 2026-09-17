#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    int n,q;
    cin >> n >> q;
 
    vector<ll>vec;
    map<ll,ll>mp;
 
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin >> a;
        vec.pb(a);
        ans+=a;
        mp[i]=a;
    }
    ll store;
 
    while(q--)
    {
 
        ll x;
 
        cin >> x;
 
 
        if(x==1)
        {
            ll y,z;
            cin >> y >> z;
            if(!mp[y-1])
            {
                mp[y-1]=store;
            }
            ans-=mp[y-1];
            ans+=z;
            mp[y-1]=z;
            cout << ans << "
";
        }
        else
        {
            ll z;
            cin >> z;
            ans=n*z;
            mp.clear();
            store=z;
            cout << ans << "
";
        }
 
    }
 
    checkmate
}