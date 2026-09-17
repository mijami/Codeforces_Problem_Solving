#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#define newline cout << "
";
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int a[n+10][m+10]= {0};
        for(int i=0; i<n+10; i++)
        {
            for(int j=0; j<m+10; j++)
            {
                a[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                int k;
                cin >> k;
                a[i][j]=k;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
 
 
                if(a[i][j] > a[i+1][j] && a[i][j] > a[i][j+1] && a[i][j] > a[i][j-1] && a[i][j] > a[i-1][j])
                {
                    a[i][j] =max(max(max( a[i+1][j], a[i][j-1]),a[i-1][j] ),a[i][j+1]);
                }
 
 
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << "
";
        }
 
 
 
        //cout << ans << "
";
 
    }
 
 
    return 0;
}