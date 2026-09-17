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
        int n,m;
        cin >> n >> m;
        vector<ll>vec;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            sum+=a;
            vec.pb(sum);
        }
        for(int i=0;i<m;i++)
        {
            int l,r,k;
            cin >> l >> r >> k;
 
            ll z= vec[r-1]-vec[l-2];
            if(l-2<0) z=vec[r-1];
            ll an=((r-l)+1)*k;
            if( (sum-z+an)%2==0)
            {
                cout << "NO
";
            }
            else cout << "YES
";
        }
    }
 
    return 0;
}