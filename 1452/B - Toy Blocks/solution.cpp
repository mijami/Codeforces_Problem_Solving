#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        ll n;
        cin >> n ;
 
        vector<int>vec,v;
        ll s=0,maxx=0;
 
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            s+=a;
            maxx=max(a,maxx);
        }
        //cout << s << " " << n-1 << " ";
 
        int k=n-1;
        ll x=(s+k-1)/k;
 
        x=x*(n-1);
        //cout << x << " ";
        ll y=maxx*(n-1);
        x=max(x,y);
        cout << x-s << "
";
    }
 
 
 
 
 
    return 0;
}