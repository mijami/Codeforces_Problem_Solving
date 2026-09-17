#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int n;
    cin >> n;
    ll a,b,c;
    ll x;
    if(n<=2)
    {
        cout << n << "
";
    }
    else if(n==3)
    {
        cout << "6" << "
";
    }
    else if(n==4)
    {
        cout << "12" << "
";
    }
    else if(n%2==0)
    {
        a=n-1;
        b=n-2;
        c=n-3;
        x=n;
        int flag=0;
        if(x%3==0 && c%3==0)
        {
            flag++;
        }
        if(x*a*c>a*b*c && flag==0)
        {
            cout << x*a*c << "
";
        }
        else
            cout << a*b*c << "
";
    }
    else
    {
        a=n;
        b=n-1;
        c=n-2;
        cout << a*b*c << "
";
    }
 
    checkmate
}