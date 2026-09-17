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
        int n;
        cin >> n;
        if(n==4 || n<3)
        {
            cout << "-1" << "
";
            continue;
        }
        if(n%3!=0 && n%5!=0 && n%7!=0)
        {
            int a,b,c;
            if( (n-7) % 3==0)
            {
                a=(n-7)/3;
                b=0;
                c=1;
            }
            else if( (n-7) % 5==0)
            {
                a=0;
                b=(n-7) / 5;
                c=1;
            }
            else if( (n-3) % 5==0)
            {
                a=1;
                b=(n-3) / 5;
                c=0;
            }
            else if( (n-3) % 7==0)
            {
                a=1;
                b=0;
                c=(n-3) / 7;
            }
            else if( (n-5) % 3==0)
            {
                a=(n-5)/3;
                b=1;
                c=0;
            }
            else if( (n-5) % 7==0)
            {
                a=0;
                b=1;
                c=(n-5)/3;
            }
            cout << a << " " << b << " " << c << "
";
        }
        else if(n%3==0)
        {
            cout << n/3 << " 0" << " 0"<< "
";
        }
        else if(n%5==0)
        {
            cout  << "0 " << n/5 << " 0" << "
";
        }
        else if(n%7==0)
        {
            cout << "0 " << "0 " << n/7 << "
";
        }
    }
 
    checkmate
}