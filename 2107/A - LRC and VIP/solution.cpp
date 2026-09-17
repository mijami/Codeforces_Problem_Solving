#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define newline cout << "
";
using namespace std;
 
static const int UNCOLORED = -1;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        cin >> n;
        vector<int>vec,v,v2;
        int mx=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            mx=max(a,mx);
        }
        v=vec;
        v2=vec;
        sort(v.begin(),v.end());
        sort(v2.rbegin(),v2.rend());
        if(v==v2)
        {
            cout << "NO
";
        }
        else
        {
            cout << "YES
";
            for(int i=0; i<n; i++)
            {
                if(vec[i]==mx)
                {
                    cout << "2 ";
                }
                else cout << "1 ";
            }
            cout << "
";
        }
 
 
    }
 
 
 
    return 0;
}