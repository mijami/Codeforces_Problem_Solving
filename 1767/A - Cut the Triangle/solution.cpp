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
        int a,b,c,d,y,z;
        cin >> a >> b >> c >> d >> y >> z;
        if((b==d || d==z || b==z) && (a==c || c==y || a==y))
        {
            cout << "NO" << "
";
        }
        else
        {
            cout << "YES" << "
";
        }
 
 
 
    }
 
    return 0;
}