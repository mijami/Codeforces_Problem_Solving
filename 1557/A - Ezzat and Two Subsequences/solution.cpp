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
        vector<ll>vec;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
            sum+=a;
        }
        sort(vec.rbegin(),vec.rend());
        sum=sum-vec[0];
        double x= (double)sum/(n-1);
        cout << setprecision(9) << fixed << vec[0]+x << "
";
 
 
    }
 
    checkmate
}