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
        ll n,p,l,t;
        cin >> n >> p >> l >> t;
 
        int k=(n-1)/7;
        k++;
        ll sum=0;
        int days=0;
        if(k>=2)
        {
 
            sum+=(l+(t*2))*(k/2);
            days=k/2;
 
 
        }
        if(k%2!=0)
        {
            sum+=l+t;
            days++;
        }
        if( ceil((double)p/(l+(t*2))) <=  (k/2))
        {
            days=ceil((double)p/(l+(t*2)));
 
            cout << n-days << "
";
            continue;
        }
 
 
 
        if(sum<p)
        {
            ll y= p-sum;
 
            if(y%l==0)
            {
                y=y/l;
            }
            else
            {
                y=(y/l)+1;
 
            }
            days+=y;
        }
        cout << n-days << "
";
 
 
 
    }
 
 
    return 0;
}