#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
 
#define ll long long int
#define beg begin()
#define end end()
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll > v;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            v.pb(a);
        }
        if(n==1)
        {
            cout << v[0] << "
";
            continue;
        }
        sort(v.beg,v.end);
        ll k=1;
        ll sum =0;
 
        for(int i=0;i<n;i++)
        {
 
            while(v[i]%2==0)
            {
                v[i]=v[i]/2;
                k=k*2;
            }
        }
 
        sort(v.beg,v.end);
        for(int i=0;i<n-1;i++)
        {
            sum+=v[i];
        }
 
        sum+=v[n-1]*k;
        cout <<sum <<"
";
 
 
    }
 
    checkmate
}