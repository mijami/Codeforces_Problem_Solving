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
        int n;
        cin >> n;
        ll s=0;
        ll ans=0;
 
        int k=n/2;
        if(n==2)
        {
            cout << 2 << "
";
            continue;
        }
        while(k<n)
        {
            int y=n;
            for(int i=1; i<=k; i++)
            {
                s+=i*i;
            }
            int z=0;
            for(int j=k+1; j<=n; j++)
            {
                s+= j*y;
                z=max(j*y,z);
                y--;
            }
            s=s-z;
            ans=max(s,ans);
            k++;
            s=0;
 
        }
 
        //s+= 20*15+ 19*16+18*17 + 16*19 + 15*20;
        cout << ans << "
";
    }
 
 
 
    return 0;
}