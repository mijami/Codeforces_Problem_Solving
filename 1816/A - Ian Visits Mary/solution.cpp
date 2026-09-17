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
 
        int n,m;
        cin >> n >> m;
        if(n==m)
        {
            cout << 2 << "
";
 
            cout << 1 << " " << m-1 << "
";
 
            cout << n << " " << m << "
";
        }
        else
        {
            if(n==1)
            {
                cout << 1 << "
";
                cout << n << " " << m << "
";
            }
            else
            {
                cout << 2 << "
";
                cout << 1 << " " << m-1 << "
";
                cout << n << " " << m << "
";
 
            }
 
        }
    }
    return 0;
}
 
 