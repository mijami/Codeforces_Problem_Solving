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
    int cas=0;
 
    while(t--)
    {
        cas++;
        int n;
        cin >> n;
        vector<int>vec;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin >> a;
 
 
            int mx=abs(a-i);
            if(mx>0) vec.pb(mx);
 
        }
 
        sort(vec.begin(),vec.end());
        int fl=vec[0];
        for(int i=0;i<vec.size();i++)
        {
            fl=__gcd(fl,vec[i]);
        }
        cout << fl << "
";
    }
 
    return 0;
}