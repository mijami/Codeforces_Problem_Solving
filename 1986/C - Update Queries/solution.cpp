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
        cin >> n >> m;
        string a;
        cin >> a;
 
        vector<int>vec;
        for(int i=0; i<m; i++)
        {
             int v;
             cin >> v;
             vec.pb(v);
        }
 
        string b;
        cin >> b;
 
        sort(vec.begin(),vec.end());
 
        sort(b.begin(),b.end());
 
        int j=0;
 
        for(int i=0; i<m; i++)
        {
 
            if(i==0) a[vec[i]-1]=b[j];
            else if(vec[i]==vec[i-1]) a[vec[i]-1]=b[j];
            else {
                j++;
                a[vec[i]-1]=b[j];
            }
 
 
 
        }
        cout << a << "
";
 
 
 
 
        //cout << ans << "
";
 
    }
 
 
    return 0;
}