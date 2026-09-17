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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ans.pb(vec[0]);
        int fl=0;
        cout << "1";
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(fl && vec[i]>=ans[j] && vec[i]<=ans[0])
            {
                ans.pb(vec[i]);
                cout <<"1";
                j++;
            }
            else if(fl)
            {
                cout << "0";
            }
            else if(vec[i]>=ans[j] && fl==0)
            {
                ans.pb(vec[i]);
                cout <<"1";
                j++;
            }
            else if(vec[i]<ans[j] && vec[i]<=ans[0] && fl==0)
            {
                ans.pb(vec[i]);
                fl++;
                cout <<"1";
                j++;
            }
            else
            {
                cout << 0 << "";
            }
 
 
        }
 
        cout << "
";
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 