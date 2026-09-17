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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a<1)
            {
                k++;
            }
        }
        int x=n-k;
        int cnt=0;
        if(x>k)
        {
            if(k%2==0)
            {
                cout << "0
";
            }
            else
            {
                cout << 1 << "
";
            }
        }
        else if(x==k)
        {
 
            if( (k)%2==0 )
            {
                cout << 0 << "
";
            }
            else
            {
                cout << 1 << "
";
            }
        }
        else
        {
            while(k>x)
            {
                k--;
                x++;
                cnt++;
            }
            if(k%2==0)
            {
                cout << cnt << "
";
            }
            else
            {
                cout << cnt+1 << "
";
            }
 
        }
 
 
 
 
 
 
    }
 
 
 
 
 
    return 0;
}
 