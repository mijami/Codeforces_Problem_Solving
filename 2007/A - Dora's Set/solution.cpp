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
 
        int cnt=0;
        for(int i=n;i<=m;i++)
        {
            if(i%2!=0 && i+2<=m)
            {
                cnt++;
                i+=2;
            }
        }
 
 
        cout << cnt << "
";
 
 
 
 
 
 
    }
 
 
 
 
 
 
    return 0;
 
 
}