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
        ll x=0;
        ll y=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a%2==0)
            {
                x+=a;
            }
            else y+=a;
        }
        if(x>y) cout << "YES
";
        else cout << "NO
";
    }
 
    return 0;
}