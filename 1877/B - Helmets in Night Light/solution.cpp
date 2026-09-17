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
 
        int n,k;
        cin >> n >> k;
        vector<ll>vec,v;
        ll s=0;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
 
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }
        vector<pair<int, int> > mp;
 
        for(int i=0; i<n; i++)
        {
 
            mp.push_back( make_pair(v[i],vec[i]) );
        }
        sort(mp.begin(),mp.end());
        ll cost=k;
        ll cnt=1;
        for(int i=0; i<n; i++)
        {
            if(cnt<n)
            {
                ll cst= mp[i].first;
                ll pp= mp[i].second;
                if(cst>k)
                {
                    cost+=(k*(n-cnt));
                    cnt=n;
 
                }
                cost+=(cst*min(n-cnt,pp));
                cnt+=min(n-cnt,pp);
            }
 
        }
        if(cnt!=n)
        {
            cost+=(k*(n-cnt));
            cnt=n;
        }
        cout << cost <<  "
";
 
 
 
    }
 
 
    return 0;
}