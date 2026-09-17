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
        int n;
        cin >> n;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
 
        int ans2=-1;
        for(int i=0; i<256; i++)
        {
            int ans=0;
            for(int j=0; j<n; j++)
            {
                int k = vec[j]^i;
                ans= ans^k;
            }
 
            if(ans==0)
            {
                ans2=i;
                break;
            }
        }
        cout << ans2 << "
";
 
 
    }
    return 0;
}
 
 