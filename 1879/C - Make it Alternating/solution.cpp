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
 
 
        string a;
        cin >> a;
        ll n=a.size();
        ll cnt=1;
        ll ans1=0;
        ll ans2=1;
 
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
            }
            else if(a[i]!=a[i+1])
            {
                ans1+=(cnt-1);
                ans2=((ans2%998244353)*(cnt%998244353))%998244353;
                cnt=1;
            }
        }
        if(cnt>1)
        {
            ans1+=(cnt-1);
            ans2=((ans2%998244353)*(cnt%998244353))%998244353;
        }
        if(ans1==0)
        {
            ans2=1;
        }
        for(int i=1;i<=ans1;i++)
        {
            ans2= ((ans2%998244353) *(i%998244353))%998244353;
        }
 
 
        cout << ans1 << " " << ans2 << "
";
 
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}