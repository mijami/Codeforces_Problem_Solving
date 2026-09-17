#include <bits/stdc++.h>
 
using namespace std;
 
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define checkmate return 0;
#define pb push_back
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v,vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            v.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0;i<n;i++)
        {
            if(vec[i]>v[i])
            {
                swap(vec[i],v[i]);
            }
        }
        sort(v.begin(),v.end());
        sort(vec.begin(),vec.end());
        cout << v[n-1]*vec[n-1] << "
";
    }
 
    checkmate
}