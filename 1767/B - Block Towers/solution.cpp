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
        vector<ll>vec;
        ll x;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            if(i==0) x=a;
            vec.pb(a);
        }
        sort(vec.begin()+1,vec.end());
 
        for(int i=1;i<n;i++)
        {
 
            if(vec[i]>x)
            {
 
                if((vec[i]-x) % 2 ==0) x+= ((vec[i]-x) /2) ;
                else x+= ((vec[i]-x) /2) +1;
 
            }
        }
        cout << x << "
";
 
    }
 
    return 0;
}