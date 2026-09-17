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
        int n;
        cin >> n;
        vector<ll>vec;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            mp[a]++;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        if(mp[1]==0)
        {
            cout << "NO
";
            continue;
        }
        ll x=1;
        ll sum=0;
        int fl=0;
        for(int i=0; i<n; i++)
        {
 
            if((vec[i]-mp[x]) > (sum-mp[x]) && vec[i]!=1)
            {
                fl=1;
                break;
            }
            sum+=vec[i];
        }
        if(fl) cout << "NO
";
        else cout << "YES
";
    }
 
    return 0;
}