#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define newline cout << "
";
 
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin >> t;
    while(t--)
    {
        ll n,l,r;
        cin >> n >> l >> r;
        vector<ll>vec,range,range2;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(i+1<l) vec.pb(a);
            else if(i+1>=l && i+1<=r)
            {
                range.pb(a);
            }
            else range2.pb(a);
        }
        sort(vec.begin(),vec.end());
        sort(range.rbegin(),range.rend());
        sort(range2.begin(),range2.end());
 
        int k=r-l+1;
        ll sum=0;
        int cnt=0;
        for(int i=0; i<vec.size(); i++)
        {
            if(cnt<k)
            {
                sum+=min(vec[i],range[i]);
                cnt++;
            }
        }
        if(cnt<k)
        {
            while(cnt<k)
            {
                sum+=range[cnt];
                cnt++;
            }
        }
        ll ans=sum;
        sum=0;
        cnt=0;
        for(int i=0; i<range2.size(); i++)
        {
            if(cnt<k)
            {
                sum+=min(range[i],range2[i]);
                cnt++;
            }
        }
        if(cnt<k)
        {
            while(cnt<k)
            {
                sum+=range[cnt];
                cnt++;
            }
        }
        ans= min(ans,sum);
 
 
        cout << ans << "
";
 
    }
    return 0;
}