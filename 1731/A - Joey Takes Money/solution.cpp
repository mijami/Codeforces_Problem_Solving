#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
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
        ll x=1;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            x=x*a;
        }
        x+=(n-1);
        x=x*2022;
        cout << x << "
";
    }
 
 
 
    return 0;
}