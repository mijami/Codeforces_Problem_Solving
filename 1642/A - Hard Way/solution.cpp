#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    long long int a,b,c,d,e,f;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >>d >> e >>f;
        if(b== d && b>f)
        {
            cout << abs(c-a) << "
";
        }
        else if( b==f && b>d)
        {
            cout << abs(e-a) << "
";
        }
        else if(d==f && d>b){
            cout << abs(c-e) << "
";
        }
        else {
            cout << 0 << "
";
        }
    }
 
 
 
    return 0;
}