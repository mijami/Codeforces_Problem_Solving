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
        int n,m;
        cin >> n >> m;
        ll s=0;
        vector<int >v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        if(n>m)
        {
            cout << "NO" << "
";
            continue;
        }
        sort(v.begin(),v.end());
        s=v[0]*2;
        for(int i=1;i<n-1;i++)
        {
            if(v[i]>v[i-1])
            {
                int x=v[i]-v[i-1];
                s+=x;
                s+=v[i];
            }
            if(v[i]==v[i-1])
            {
                s+=v[i];
            }
        }
        s+=(v[n-1]-v[n-2])+(v[n-1]-v[0]);
        s+=n;
        if(s<=m)
        {
            cout << "YES" << "
";
        }
        else cout << "NO" << "
";
    }
 
    checkmate
}