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
 
        int n,k;
        cin >> n >> k;
        vector<int>vec,v;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=1;i<n;i++)
        {
            v.pb(abs(vec[i]-vec[i-1]));
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n-k;i++)
        {
            sum+=v[i];
        }
        cout << sum << "
";
 
    }
 
 
 
 
 
    return 0;
}
 