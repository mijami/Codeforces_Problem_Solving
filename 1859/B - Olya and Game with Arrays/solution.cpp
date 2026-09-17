#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        ll sum=0;
        int mini=INT_MAX;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >> m;
 
            vector<int>vec;
            for(int j=0;j<m;j++)
            {
                int a;
                cin >> a;
                vec.pb(a);
            }
            sort(vec.begin(),vec.end());
 
            if(i==0)
            {
                v.pb(vec[0]);
            }
            v[0]=min(v[0],vec[0]);
            v.pb(vec[1]);
        }
        sort(v.begin(),v.end());
        for(int i=2;i<v.size();i++)
        {
            sum+=v[i];
        }
        sum+=v[0];
 
        cout << sum << "
";
 
    }
 
 
 
    return 0;
}