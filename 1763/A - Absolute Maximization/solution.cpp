#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
 
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
 
 
        ll s;
        vector<ll>vec;
        map<ll,ll>mp;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin >> x;
            vec.pb(x);
            mp[x]++;
        }
        sort(vec.begin(),vec.end());
        s=vec[0];
        ll si=vec[n-1];
        for(int i=1; i<n; i++)
        {
            s= vec[i] | s;
        }
        ll m =vec[0];
        for(int i=1; i<n; i++)
        {
            m= vec[i] & m;
        }
        cout << s-m << "
";
 
 
    }
 
    return 0;
}