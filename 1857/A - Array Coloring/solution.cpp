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
        ll n;
        cin >> n ;
 
        vector<int>vec,v;
        ll s=0,maxx=0;
 
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            s+=a;
        }
        if(s%2==0)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
 
 
 
 
 
    return 0;
}