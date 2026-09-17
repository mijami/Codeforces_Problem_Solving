#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
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
        ll n,x;
        cin >> n;
 
        int cnt=0;
        int ans=1;
        for(int i=1;i<=100;i++)
        {
            if(n%i==0)
            {
                cnt++;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        cout << ans << "
";
 
 
    }
 
 
 
 
 
    return 0;
}