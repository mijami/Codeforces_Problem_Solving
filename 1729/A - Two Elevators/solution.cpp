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
        int a,b,c;
        cin >> a >> b >> c;
        if(a==1)
        {
            cout << 1 << "
";
        }
        else if(  abs(a-1)==(abs(c-b)+abs(c-1)))
        {
            cout << 3 << "
";
        }
        else if(abs(a-1) > (abs(c-b)+abs(c-1)))
        {
            cout << 2 << "
";
        }
        else
        {
            cout << "1" << "
";
        }
    }
 
    checkmate
}
 