#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
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
        ll a,b,n;
        cin >> a >> b >> n;
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            vec.pb(x);
        }
        sort(vec.begin(),vec.end());
        ll ans=min(a,b)-1;
        for(int i=0;i<n;i++)
        {
            ll x=vec[i];
            if(x+1<=a)
            {
                ans+=min(x,a-1);
            }
            else
            {
                ans+=(a-1);
            }
 
        }
        ans++;
        cout << ans << "
";
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}