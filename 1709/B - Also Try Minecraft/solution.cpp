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
    vector<ll>vec,forw,backw(n);
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(i>0 && vec[i-1]-vec[i]>0)
        {
           ans+=vec[i-1]-vec[i];
        }
        forw.pb(ans);
    }
    ans=0;
    for(int i=n-1;i>=0;i--)
    {
        if(i<n-1 && vec[i+1]-vec[i]>0)
        {
            ans+=vec[i+1]-vec[i];
        }
        backw[i]=ans;
    }
 
    for(int i=0; i<m; i++)
    {
        int p,q;
        cin >> p >> q;
        ans=0;
        if(p<q)
        {
            ans=forw[q-1]-forw[p-1];
        }
        else
        {
            ans=backw[q-1]-backw[p-1];
        }
        cout << ans << "
";
    }
 
    checkmate
}