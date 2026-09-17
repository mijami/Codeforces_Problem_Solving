#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4; ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        if(n==1)
        {
            cout << k << "
";
        }
        else if(k==1)
        {
            cout << k << "
";
        }
        else if(n==k)
        {
            cout << 1 << "
";
        }
        else if(n>k)
        {
            if(n%k==0)
            {
                cout << 1 << "
";
            }
            else
                cout << (((n/k)+1)*k)/n  + 1 << "
";
        }
        else if(n<k)
        {
            if(k%n==0)
            {
                cout << k/n << "
";
            }
 
            else
                cout << (k/n)+1 << "
";
 
        }
    }
 
    checkmate
}