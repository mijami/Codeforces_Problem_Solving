#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >>t;
 
    while(t--)
    {
 
        ll a,b,c;
        cin >> a >> b >> c;
 
        if(a>b)
        {
            cout << "First" << "
";
        }
        else if(a<b)
        {
            cout << "Second
";
        }
        else
        {
            if(c%2==0)
            {
                cout << "Second
";
            }
            else
            {
                cout << "First
";
            }
        }
 
 
 
    }
 
 
 
    return 0;
}