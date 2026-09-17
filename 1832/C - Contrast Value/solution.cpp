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
        vector<int>vec;
        ll s=0;
        map<int,int>mp;
        int cnt=-1;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
 
            if(i==0)
            {
                vec.pb(a);
                cnt++;
            }
            else if(i>0 && a==vec[cnt]) continue;
            else
            {
                vec.pb(a);
                cnt++;
            }
        }
        
        if(1==vec.size())
        {
            cout << 1 << "
";
        }
        
        else if(n<=2)
        {
            cout << n << "
";
        }
        else
        {
 
            int i=0;
 
            n=vec.size();
            vector<int>ans;
            int sz=0;
 
            for(;;)
            {
 
                if(vec[i]>=vec[i+1] &&  i+1<n)
                {
                    if(sz==0)
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    else if(sz>0 && ans[sz-1]!=vec[i])
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    if(i>=n) break;
                    while(vec[i]>=vec[i+1] && i+1<n)
                    {
                        i++;
                    }
                    if(sz>0 && ans[sz-1]!=vec[i])
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    if(i>=n) break;
 
                }
                else if(vec[i]<=vec[i+1] && i+1<n)
                {
                    if(sz==0)
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    else if(sz>0 && ans[sz-1]!=vec[i])
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    if(i>=n) break;
                    while(vec[i]<=vec[i+1] && i+1<n)
                    {
                        i++;
                    }
                    if(sz>0 && ans[sz-1]!=vec[i])
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    if(i>=n) break;
                }
                else if(i+1==n)
                {
                    if(sz>0 && ans[sz-1]!=vec[i])
                    {
                        ans.pb(vec[i]);
                        sz++;
                    }
                    break;
                }
            }
            cout << ans.size() << "
";
 
        }
 
 
 
 
 
 
 
 
 
    }
 
    return 0;
}