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
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int>v,v2(n);
        vector<pair<int, int>>vec(n);
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> vec[i].first;
            vec[i].second=i;
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        sort(v.begin(),v.end());
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            v2[vec[i].second]=v[i];
        }
        for(int i=0;i<n;i++)
        {
            cout << v2[i] << " ";
        }
        cout << "
";
 
 
    }
 
    return 0;
}