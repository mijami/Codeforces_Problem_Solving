#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    ll a,b;
    cin >> a >> b;
    if(a%2!=0)
    {
        a++;
    }
    if(a+2<=b)
    {
        cout << a << " " << a+1 << " " << a+2 << "
";
    }
    else
        cout << -1<< "
";
 
    checkmate
}