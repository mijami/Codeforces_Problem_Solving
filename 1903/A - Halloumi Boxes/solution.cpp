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
        int n;
        cin >> n;
        int k;
        cin >> k;
 
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        if(k>=2)
        {
            cout << "YES
";
            continue;
        }
        v=vec;
        sort(v.begin(),v.end());
        if(v==vec)
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