#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
 
        sort(v.begin(),v.end());
        if( v==vec)
        {
            cout << "0
";
            continue;
        }
        sort(v.rbegin(),v.rend());
        if(v==vec)
        {
            cout << n-1 << "
";
            continue;
        }
        int cnt=0;
        map<int,int>mp;
        mp[0]++;
        for(int i=0;i<n-1;i++)
        {
            mp[vec[i]]++;
            if(mp[vec[i]-1]==0)
            {
                cnt++;
            }
        }
 
        cout << cnt << "
";
    }
 
 
 
}
 
 