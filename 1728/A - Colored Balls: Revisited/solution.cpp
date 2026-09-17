#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define checkmate return 0;
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
        long long int s=0;
        int ans=1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a>s)
            {
                s=a;
                ans=i+1;
            }
        }
        cout << ans << "
";
 
    }
 
    checkmate
}