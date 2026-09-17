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
        ll w,f;
        cin >> w >> f;
        if(w<f)
        {
            swap(w,f);
        }
 
        ll n;
        cin >> n;
        vector<ll>vec,v;
        ll x=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        for(int i=0; i<n; i++)
        {
            x+=vec[i];
            v.pb(x);
        }
 
        ll l = 0, r = 10000000000;
        ll ans=0;
        ll m;
        ll k=LONG_MAX;
 
 
        vector<bool> dp(1000000);
        dp[0] = true;
        for (int i = 0; i < n; ++i)
        {
            for (int w = v[n-1]; w - vec[i] >= 0; --w)
            {
                dp[w] = dp[w] || dp[w - vec[i]];
            }
        }
 
 
 
 
 
 
 
 
        while (l<=r)
        {
 
            m = l + (r - l) / 2;
 
            ll afterw=w*m;
            ll afterf=f*m;
            for(int i=0; i<=v[n-1]+10000; i++)
            {
                if(dp[i])
                {
                    ll y= v[n-1]-i;
                    if( (i<=max(w*m,f*m) && y<=min(w*m,f*m)) || (i<=min(w*m,f*m) && y<=max(w*m,f*m)) )
                    {
                        ans=1;
                        break;
                    }
                }
                else
                {
                    ans=2;
                }
            }
 
 
            if(ans==2)
            {
                l=m+1;
            }
            else if(ans==1)
            {
                k=min(m,k);
 
                r=m-1;
            }
 
        }
        cout << k << "
";
 
 
 
 
    }
 
 
}