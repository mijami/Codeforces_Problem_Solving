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
        ll n,x;
        cin >> n ;
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a==i+1)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout << cnt << "
";
        }
        else if(cnt%2==0)
        {
            cout << cnt/2 << "
";
        }
        else
        {
            cout << (cnt/2)+1 << "
";
        }
 
    }
 
 
 
 
 
    return 0;
}
 