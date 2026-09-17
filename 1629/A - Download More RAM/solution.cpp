#include <bits/stdc++.h>
 
using namespace std;
 
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define checkmate return 0;
#define pb push_back
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int> v,vec;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(mp[v[i]]>0)
            {
                mp[v[i]]+=vec[i];
            }
            else
                mp[v[i]]=vec[i];
 
        }
        sort(v.begin(),v.end());
 
        for(int i=0;i<n;i++)
        {
            if(k>=v[i] && mp[v[i]]>-1)
            {
                k+=mp[v[i]];
                mp[v[i]]=-1;
 
            }
 
        }
        cout << k << "
";
    }
    checkmate
}
 
 
 
 