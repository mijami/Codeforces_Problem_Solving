#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int a,b,c, t;
    cin >> t;
 
    while(t--)
    {
        cin >> a >> b >> c;
        if(a+b==c || b+c==a || a+c==b){
            cout << "YES" << "
";
        }
        else if((a==b && c%2==0) || (a==c && b%2==0) || (c==b && a%2==0)) {
            cout << "YES" << "
";
        }
        else {
            cout << "NO" << "
";
        }
    }
 
    return 0;
}
 