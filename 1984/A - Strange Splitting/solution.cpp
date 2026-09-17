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
        cin>>n;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        if(vec[0]==vec[n-1])
        {
            cout << "NO
";
            continue;
        }
        cout << "YES" << "
";
        if(vec[0]==vec[1])
        {
            cout << "R";
            for(int i=1; i<n; i++)
            {
                cout << "B";
            }
            cout  << "
";
        }
        else
        {
 
            for(int i=0; i<n-1; i++)
            {
                cout << "B";
            }
            cout << "R";
            cout  << "
";
        }
 
    }
 
 
    return 0;
}