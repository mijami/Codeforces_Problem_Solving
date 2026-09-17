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
        int x=0,y=0;
        int n;
        cin >> n;
        string a;
        cin >> a;
        map<char,int>mp,m;
        vector<char>vec,v;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        ll ans=-1;
        for(int i=0; i<n; i++)
        {
            mp[a[i]]--;
            m[a[i]]++;
            ll cnt=0;
            for(auto x:mp)
            {
                cnt+=min(1,x.second);
            }
            for(auto x:m)
            {
                cnt+=min(1,x.second);
            }
            ans=max(ans,cnt);
        }
        cout << ans << "
";
    }
    return 0;
}