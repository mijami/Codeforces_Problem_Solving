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
 
    int t=1;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            string a;
            cin >> a;
 
            for(int j=0;j<4;j++)
            {
                if(a[j]=='#')
                {
                    vec.pb(j+1);
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            cout << vec[i] << " ";
        }
 
 
        cout  << "
";
 
 
 
 
 
 
    }
 
 
 
 
 
 
    return 0;
 
 
}