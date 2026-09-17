#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin >> t;
    while(t--)
    {
        ll n,k,d,w;
        cin >> n >> k >> d;
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.rbegin(),vec.rend());
        ll x=0;
        ll l= k/(d+1);
        cout << vec[0]*(k-l) + vec[1]*l << "
";
 
    }
 
    return 0;
}