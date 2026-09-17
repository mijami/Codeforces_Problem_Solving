#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >>b;
        if(__gcd(a,b)==1)
        {
            cout << "Finite
";
        }
        else
            cout << "Infinite
";
    }
    checkmate
}