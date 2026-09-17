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
        cin >> n;
 
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
 
 
 
        ll l = 0, r = 10000000000;
        ll ans=1;
        while (l<=r)
        {
 
            ll m = l + (r - l) / 2;
 
            int i=0;
            for(i=0; i<n; i++)
            {
                if((vec[i]-vec[0]) > 2*m)
                {
                    break;
                }
            }
            int j=n-1;
            for(j=n-1; j>=0; j--)
            {
                if((vec[n-1]-vec[j]) > 2*m)
                {
                    break;
                }
            }
 
 
            if(i>j || vec[j]-vec[i] <= m*2)
            {
                ans=m;
                r=m-1;
 
            }
            else
            {
                l=m+1;
            }
 
        }
 
 
 
        cout << ans << "
";
 
 
 
    }
 
 
    return 0;
}