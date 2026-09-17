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
        int a,b,c,d;
        cin >> a >> b >> c >> d;
 
 
        if( (a<b && c<d && a<c && b<d) || (a<b && d<b && c< a && c<d)
           || (c<a && b<a && d<b && d<c) || (b<d && b<a && a<c && d<c)  )
        {
            cout << "YES" << "
";
        }
        else cout << "NO
";
 
    }
 
    return 0;
}