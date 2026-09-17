#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        char arr[n][m];
        vector<int>v,v2;
 
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> arr[i][j];
                if(arr[i][j]=='R')
                {
                    v.pb(i);
                    v2.pb(j);
                }
            }
        }
        int y=v2[0];
        int x=v[0];
        int flag=1;
        for(int i=0;i<v.size();i++)
        {
            v[i]=v[i]-x;
            v2[i]=v2[i]-y;
            if(v[i]<0 ||v2[i]<0)
            {
                flag=0;
            }
        }
        if(flag)
        {
            cout << "YES" << "
";
        }
        else
            cout << "NO" << "
";
 
    }
    checkmate
}