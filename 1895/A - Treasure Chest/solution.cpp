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
        int x,y,k;
        cin >> x >> y >> k;
 
        int ans=max(x,y);
 
        int ans2=ans;
 
        int z=0;
        if(x<y)
        {
            ans2=ans+(ans-x)+(ans-y);
            z=(y-x);
        }
        ans2=ans2-min(z,k);
        cout << ans2 << "
";
 
 
 
 
 
 
    }
 
 
    return 0;
}