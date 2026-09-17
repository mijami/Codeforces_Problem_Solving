#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
 
vector<pair<int,int>> adj[1000005];
 
map<pair<int,int>,int> mp;
vector<int> dp;
 
void DFS(int current,int parent)
{
    for(auto i:adj[current])
    {
        int to=i.first;
        int id=i.second;
        if(to==parent) continue;
        mp[{to,current}]=id;
        mp[{current,to}]=id;
        if(dp[current]!=INT_MAX)
        {
            if(current==1)
            {
                dp[to]=1;
            }
            else{
                if(id>mp[{current,parent}])
                {
                    dp[to]=dp[current];
                }
                else
                {
                    dp[to]=dp[current]+1;
                }
            }
        }
        DFS(to,current);
    }
}
 
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
 
        for(int i=0;i<=n;i++)
        {
            adj[i].clear();
        }
        dp.assign(n+1,INT_MAX);
        dp[0]=0;
        dp[1]=0;
        mp.clear();
 
        for(int i=1;i<n;i++)
        {
            int u,v;
            cin >> u >> v;
            adj[v].pb({u,i});
            adj[u].pb({v,i});
        }
 
 
        DFS(1,-1);
 
        cout << *max_element(dp.begin(),dp.end()) << "
";
 
    }
 
    return 0;
}