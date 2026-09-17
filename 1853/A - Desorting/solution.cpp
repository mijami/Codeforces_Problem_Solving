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
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        v=vec;
        sort(vec.begin(),vec.end());
        if(v==vec)
        {
            int dif=1000000000;
            for(int i=1;i<n;i++)
            {
                dif = min(dif,vec[i]-vec[i-1]);
            }
            cout << dif/2 +1 << "
";
 
        }
        else
        {
            cout << "0
";
        }
 
    }
 
 
 
 
 
    return 0;
}
 