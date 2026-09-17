#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
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
        for(int i=0;i<n;i++)
        {
            if(v[i]!=vec[n-1])
            {
                cout << v[i]-vec[n-1] << " ";
            }
            else{
                cout << v[i]-vec[n-2] << " ";
            }
 
        }
        cout << "
";
    }
 
 
    return 0;
}