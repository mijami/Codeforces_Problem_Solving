#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
 
/*
vector<pair<int,int>> vec[1000005];
vector<int> dp;
map<pair<int,int>,int> rec;
 
 
void DFS(int current, int parent)
{
    for(auto i:vec[current])
    {
        int to= i.first;
        int id= i.second;
        if(to==parent)
        {
            continue;
        }
        rec[{current,to}]=id;
        rec[{to,current}]=id;
        if(dp[current]!=INT_MAX)
        {
            if(current==1)
            {
                dp[to]=1;
            }
            else
            {
                if(id>rec[{current,parent}])
                {
                    dp[to]=dp[current];
                }
                else{
                    dp[to]=dp[current]+1;
                }
            }
        }
        DFS(to,current);
    }
}
 
*/
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        vector<pair<int,int>>vec;
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            vec.pb(make_pair(b,a));
        }
        sort(vec.rbegin(),vec.rend());
        ll sum=0;
        int cnt=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            //cout << cnt << " " << vec[i].second << "
";
            if(mp[vec[i].second]< vec[i].second)
            {
                //cout << vec[i].first << " " << vec[i].second << "
";
                sum+=vec[i].first;
                mp[vec[i].second]++;
                //cout << cnt << "
";
                //cout << cnt << " ";
                //cout << mp[vec[i].second] << " 
";
               // cout << vec[i].first << " " << cnt << " 
";
            }
 
 
        }
        cout << sum << "
";
 
    }
 
    return 0;
}