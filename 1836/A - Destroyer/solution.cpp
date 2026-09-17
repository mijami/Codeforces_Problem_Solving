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
 
        int n;
        cin >> n;
 
        vector<int>vec,ans;
        int k=0;
 
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
 
            if(mp[a]==0)
            {
                vec.pb(a);
            }
            mp[a]++;
        }
        if(n==1)
        {
            if(vec[0]==0)
            {
                cout << "YES
";
            }
            else
            {
                cout << "NO
";
            }
            continue;
        }
        sort(vec.rbegin(),vec.rend());
        int fl=0;
        for(int i=0;i<vec.size()-1;i++)
        {
            if(mp[vec[i]] <= mp[vec[i]-1] )
            {
                continue;
            }
            else
            {
                fl++;
                break;
            }
        }
        if(mp[0]==0) fl++;
        if(fl)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
        }
 
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 