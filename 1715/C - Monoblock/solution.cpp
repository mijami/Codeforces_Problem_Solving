#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    ll n,q;
    cin >> n >> q;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    ll ans=(n*(n+1))/2;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]!=vec[i+1])
        {
            ans+=(i+1)*(n-(i+1));
        }
    }
    while(q--)
    {
        ll i,x;
        cin >> i >> x;
        i--;
        if(i>0 && vec[i]!=vec[i-1])
        {
            ans-=(i)*(n-(i));
        }
        if(i+1<n && vec[i]!=vec[i+1])
        {
            ans-=(i+1)*(n-(i+1));
        }
        vec[i]=x;
 
        if(i>0 && vec[i]!=vec[i-1])
        {
            ans+=(i)*(n-(i));
        }
        if(i+1<n && vec[i]!=vec[i+1])
        {
            ans+=(i+1)*(n-(i+1));
        }
        cout << ans << "
";
 
    }
 
    checkmate
}