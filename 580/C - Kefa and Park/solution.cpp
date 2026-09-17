#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define checkmate return 0;
#define pb push_back
vector<int> adj[100050];
vector<int>vec;
int ans=0;
int n,m;
map<int,int>vis;
map<int,int>color,cnt;
void dfs(int n,int p)
{
    vis[n]=1;
    if(color[n]==1 && color[p]==1)
    {
        cnt[n]+=cnt[p];
    }
    for(int i=0;i<adj[n].size();i++)
    {
        if(vis[adj[n][i]]==0 && cnt[n]<=m)
        {
            dfs(adj[n][i],n);
        }
    }
    if(n!=1 && adj[n].size()==1 && cnt[n]<=m)
    {
        ans++;
    }
}
 
int main()
{
    fast
 
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        color[i+1]=a;
        cnt[i+1]=a;
    }
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ans =0;
    dfs(1,-1);
    cout << ans << "
";
    checkmate
}