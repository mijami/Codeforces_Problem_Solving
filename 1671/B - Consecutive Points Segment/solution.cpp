#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        ll s=0;
        if(n==1)
        {
            cout << "YES" << "
";
            continue;
        }
        for(int i=1;i<n;i++)
        {
            s+=vec[i]-vec[i-1];
        }
        ll x= 3+(n-2);
        if(s>x)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
    }
 
}