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
 
        int n,m;
        cin >> n >> m;
        map<int,int>mp;
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        int x=-1;
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if(vec[i]+i<=m && x<v[i])
            {
                x=v[i];
                ans=i+1;
            }
        }
        cout << ans << "
";
 
 
 
    }
 
    return 0;
}