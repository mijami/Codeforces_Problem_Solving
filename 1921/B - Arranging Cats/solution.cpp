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
        string a,b;
        cin >> a >> b;
        int cnt=0;
        int cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='1' && b[i]=='0')
            {
                cnt++;
            }
            if(a[i]=='0' && b[i]=='1')
            {
                cnt2++;
            }
        }
        cout << max(cnt,cnt2) << "
";
 
 
    }
 
 
 
    return 0;
}