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
 
 
        vector<int>vec;
 
        ll ans=0;
        for(int i=1;i<=10;i++)
        {
            string a;
            cin >> a;
            for(int j=0;j<a.size();j++)
            {
                if(a[j]=='X')
                {
                    int ans1=min((10-j), j+1);
                    int ans2=min(i,10-i+1);
                    ans+=min(ans2,ans1);
 
                }
 
            }
        }
        cout << ans << "
";
 
 
 
    }
 
 
    return 0;
}