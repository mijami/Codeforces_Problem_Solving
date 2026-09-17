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
        vector<ll> vec,vec2;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0; i<n; i++)
        {
            ll a;
            cin >> a;
            vec2.pb(a);
            if(i==0)
            {
                v.pb((vec2[0]-vec[0]));
            }
            if(vec[i]<vec2[i-1] && i>0)
            {
                v.pb((vec2[i]-vec2[i-1]));
            }
            else if(i>0 && vec[i]>=vec2[i-1]){
                v.pb((vec2[i]-vec[i]));
            }
        }
        for(int i=0;i<n;i++)
        {
            cout << v[i] << " ";
        }
        cout << "
";
 
 
    }
 
    checkmate
}