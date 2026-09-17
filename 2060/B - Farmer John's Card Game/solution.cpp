#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define newline cout << "
";
 
using namespace std;
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        map<int,int>mp;
        vector<vector<int>> vec(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int a;
                cin >> a;
                vec[i].pb(a);
            }
        }
        for(int i=0;i<n;i++)
        {
            sort(vec[i].begin(),vec[i].end());
            mp[vec[i][0]]=i+1;
        }
        sort(vec.begin(),vec.end());
 
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(vec[j][i]==cnt)
                {
                    cnt++;
                }
            }
        }
        if(cnt==n*m)
        {
            for(auto x:mp)
            {
                cout << x.second << " ";
            }
            cout << "
";
        }
        else
        {
            cout << "-1
";
        }
 
 
 
 
 
 
 
    }
    return 0;
}