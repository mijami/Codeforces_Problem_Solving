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
        int n,k;
        cin >> n >> k;
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            ll a;
            cin >> a;
            vec.pb(a);
        }
        int maximum=n/2;
        if(n%2==0)
        {
            maximum--;
        }
        if(k==1)
        {
            cout << maximum << "
";
            continue;
        }
        int cnt=0;
        for(int i=1;i<n-1;)
        {
            int check=i;
            if(vec[check]>(vec[check-1]+vec[check+1]))
            {
                cnt++;
                i+=2;
            }
            else
                i++;
        }
        cout << cnt << "
";
    }
 
    checkmate
}