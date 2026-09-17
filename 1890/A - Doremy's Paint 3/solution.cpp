#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
using namespace std;
 
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
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            mp[a]++;
        }
        int flag=0;
        if(n==3)
        {
            if(mp[vec[0]]==1 && mp[vec[1]]==1 &&mp[vec[2]]==1)
            {
                flag++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(mp[vec[i]]>= (n/2))
            {
                continue;
            }
            else
            {
                flag++;
            }
        }
        if(flag)
        {
            cout << "No
";
        }
        else
        {
            cout << "Yes
";
        }
    }
 
 
    return 0;
}