#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
 
        if(c>=a && c<=b)
        {
            cout << c << "
";
        }
        else if(a>=c && a<=d)
        {
            cout << a << "
";
        }
        else
            cout << a+c << "
";
 
 
    }
    checkmate
}