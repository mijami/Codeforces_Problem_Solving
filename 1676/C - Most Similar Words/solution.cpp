#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,s;
        cin >> n >> s;
        vector<string> vec;
        vector<int>v;
 
        for(int i=0; i<n; i++)
        {
            string a;
            cin >> a;
            vec.pb(a);
        }
        sort(vec.begin(),vec.end());
        string a;
        string b;
        int z;
        for(int j=0; j<n-1; j++)
        {
            for(int i=j+1; i<n; i++)
            {
                z=0;
                a=vec[j];
                b=vec[i];
                for(int i=0; i<s; i++)
                {
                    z+=abs(a[i]-b[i]);
                }
 
                v.pb(z);
            }
        }
 
 
        sort(v.begin(),v.end());
 
 
        cout << v[0] << "
";
 
    }
 
    checkmate
}