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
        if(n%m==0)
        {
            cout << 2 << "
";
            cout << n-(m+1) << " " << n- (n-(m+1)) << "
";
        }
        else
        {
            cout << 1 << "
";
            cout << n << "
";
        }
 
 
    }
 
    return 0;
}