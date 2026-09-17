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
 
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int cnt=0;
        int ans=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]=='A')
            {
                cnt++;
            }
            else {
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]=='B')
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << max(n-1-cnt,0) << "
";
 
 
 
 
    }
 
 
    return 0;
}