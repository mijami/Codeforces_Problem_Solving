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
        ll a;
        cin >> a;
        int x=a/3;
        int y=a- (x*3);
        if(y==2)
        {
            cout << x << " " << x+1 << "
";
        }
        else if(y==1)
        {
            cout << x+1 << " " << x << "
";
        }
        else
            cout << x << " " << x << "
";
 
    }
 
    checkmate
}