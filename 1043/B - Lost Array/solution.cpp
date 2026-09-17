#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin >> t;
    int cas=0;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec(n+1, 0);
        vector <int> nums(n+1, 0);
        for(int i=1;i<=n;i++)
        {
            cin >> vec[i];
            nums[i-1]=vec[i]-vec[i-1];
 
        }
 
        vector<int>ans;
 
        for(int i=1;i<=n;i++)
        {
            int fl=1;
            for(int j = 0; j < n; j++)
            {
                if(nums[j]!= nums[j%i])
                {
                    fl=0;
                    break;
                }
            }
            if(fl)
            {
                ans.pb(i);
            }
        }
        cout << ans.size() << "
";
        for(int i=0;i<ans.size();i++)
        {
            cout << ans[i] << " ";
        }
 
    }
    return 0;
}
 
 