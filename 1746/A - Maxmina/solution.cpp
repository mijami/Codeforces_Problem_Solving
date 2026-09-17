#include <bits/stdc++.h>
using namespace std;
 
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
        int n,m;
        cin >> n >> m;
        vector<int>vec;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a==1)
            {
                ans++;
            }
            
        }
        if(ans)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
    
    
    return 0;
}