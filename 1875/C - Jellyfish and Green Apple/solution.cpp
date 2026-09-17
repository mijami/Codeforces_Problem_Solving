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
        ll n,m;
        cin >> n >> m;
 
        if(n%m==0)
        {
            cout << 0 << "
";
        }
        else
        {
            ll cnt=0;
            int i=0;
            map<int,int>mp;
            while(1)
            {
                i++;
                if(n%m==0)
                {
                    break;
                }
                if(n>m)
                {
                    ll x=n/m;
                    x=m*x;
                    n=n-x;
                    mp[n]++;
                }
                if(mp[n]>1 || i>64)
                {
                    cnt=-1;
                    break;
                }
                n=n*2;
                mp[n]++;
                cnt+=(n/2);
 
 
            }
            cout << cnt << "
";
        }
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}