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
 
        int n,m;
        cin >> n >> m;
        ll sum=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            sum+=a;
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin >> a;
            sum2+=a;
        }
        if(sum>sum2)
        {
            cout << "Tsondu
";
        }
        else if(sum<sum2)
        {
            cout << "Tenzing
";
        }
        else
        {
            cout << "Draw
";
        }
    }
 
 
 
 
 
    return 0;
}
 