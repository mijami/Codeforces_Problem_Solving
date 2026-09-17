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
        int a=0;
        int b=n/2;
        int c=b;
        if(b+c==n)
        {
            cout << a << " " << b << " " << c << "
";
        }
        else
            cout << "-1" << "
";
    }
 
    checkmate
}