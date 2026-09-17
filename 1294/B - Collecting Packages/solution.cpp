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
        vector< pair<int,int> > vec;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            vec.pb(make_pair(a,b));
        }
        sort(vec.begin(),vec.end());
        vector<char>ans;
        int x=0;int y=0;
        int fl=0;
        for(int i=0;i<n;i++)
        {
            if(x<=vec[i].first)
            {
                int x1=vec[i].first-x;
                x=vec[i].first;
                while(x1--)
                {
                    ans.pb('R');
                }
            }
            if(y<=vec[i].second)
            {
                int x1=vec[i].second-y;
                y=vec[i].second;
                while(x1--)
                {
                    ans.pb('U');
                }
            }
            else
            {
                fl++;
                break;
            }
        }
        if(fl) cout << "NO
";
        else
        {
            cout << "YES
";
            for(int i=0;i<ans.size();i++)
            {
                cout << ans[i];
            }
            cout << "
";
        }
    }
    return 0;
}
 
 