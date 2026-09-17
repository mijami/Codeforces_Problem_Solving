#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
 
        vector<int>v;
        int x=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            v.pb(a);
            x=x^a;
        }
        int y=0;
        for(int i=0; i<m; i++)
        {
            int a;
            cin >> a;
            y=y|a;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            ans=ans^ (y|v[i]);
        }
        if(ans>x)
        {
            swap(ans,x);
        }
 
        cout << ans << " " << x <<"
";
 
 
 
    }
 
    return 0;
}