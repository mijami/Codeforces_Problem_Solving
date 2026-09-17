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
        ll n,k;
        cin >> n >> k;
 
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
 
        sort(vec.begin(),vec.end());
 
 
        ll l = 1, r = LONG_MAX;
        ll ans=1;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            ll x=0;
            for(int i=0; i<n; i++)
            {
                if(vec[i]<=mid)
                {
                    x+=mid-vec[i];
                }
            }
            if (x == k)
            {
                ans=mid;
                break;
            }
            if (x < k)
            {
                ans=mid;
                l = mid + 1;
            }
            else r = mid - 1;
 
 
        }
 
 
 
        cout << ans << "
";
 
 
 
    }
 
 
    return 0;
}