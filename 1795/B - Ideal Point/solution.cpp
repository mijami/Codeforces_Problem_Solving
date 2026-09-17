#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        map<int,int>mp;
        int flag=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            int l,r;
            cin >> l >> r;
 
            if(l==r && r==m)
            {
                ans=1;
            }
 
            if(l<=m && r>=m)
            {
                for(int i=l; i<=r; i++)
                {
                    mp[i]++;
                }
            }
        }
        for(auto x:mp)
        {
 
            if(mp[m] <= x.second && m!=x.first)
            {
                flag++;
                break;
            }
        }
        if((flag==0 || ans) && mp[m]!=0)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
    return 0;
}