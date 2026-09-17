#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        ll n,z;
        cin >> n >> z;
        vector<ll>vec;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        ll x=-1;
        for(int i=0; i<n; i++)
        {
            x=max(x,(vec[i]|z));
        }
        cout << x << "
";
    }
 
    checkmate
}