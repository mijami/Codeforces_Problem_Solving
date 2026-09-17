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
        vector<int>vec;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a==2)
            {
                cnt++;
            }
        }
        if(cnt%2!=0)
        {
            cout << "-1
";
            continue;
        }
        int x=cnt/2;
        int ans=0;
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(vec[i]==2 && ans<x)
            {
                ans++;
                flag=i+1;
            }
        }
        
        if(cnt==0) cout << 1 << "
";
        else cout << flag << "
";
    }
    return 0;
}