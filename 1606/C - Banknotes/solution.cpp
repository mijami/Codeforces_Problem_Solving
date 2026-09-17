#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    ll arr[10]={9,99,999,9999,99999,999999,9999999,99999999,999999999};
    while(t--)
    {
        ll n,m;
        cin >> n >> m;
        vector<ll > vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            ll x=1;
            for(int i=0;i<a;i++)
            {
                x=x*10;
            }
            vec.pb(x);
        }
        ll ans=0;
        m++;
        for(int i=0;i<n;i++)
        {
            ll x=m;
            if(i+1<n) x=min(m,vec[i+1]/vec[i]-1);
            ans+=vec[i]*x;
            m-=x;
        }
        cout << ans << "
";
    }
 
    checkmate
}