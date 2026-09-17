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
 
        vector<int>vec,v;
 
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
 
        }
        v=vec;
        sort(vec.begin(),vec.end());
        if(v==vec)
        {
            cout << "0
";
        }
        else
        {
            int x=0;
            for(int i=1;i<n;i++)
            {
                if(v[i-1]>v[i])
                {
                    x=max(x,v[i-1]);
                }
            }
            cout << x << "
";
 
        }
 
    }
 
 
 
 
 
    return 0;
}