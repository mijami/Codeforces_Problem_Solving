#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        ll n,k;
        cin >> n >> k;
        k--;
        ll ans=n;
        ll x=n;
        while(k--)
        {
            ll ans1=10,ans2=0;
            while(x>0)
            {
                ll y=x%10;
                x=x/10;
                ans1=min(y,ans1);
                ans2=max(y,ans2);
            }
            ans=ans+(ans1*ans2);
            if(ans1*ans2==0) break;
            x=ans;
        }
        cout << ans << "
";
 
 
    }
 
 
 
}
 
 