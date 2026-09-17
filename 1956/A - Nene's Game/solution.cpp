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
        int n,q;
        cin >>n >>q;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        while(q--)
        {
 
            int x;
            cin >> x;
            int ans=x;
            for(int i=0;i<n;i++)
            {
                if(vec[i]<=x)
                {
                    ans=vec[i]-1;
                    break;
                }
            }
            cout << ans << " ";
        }
        cout << "
";
 
 
 
    }
 
 
    return 0;
}