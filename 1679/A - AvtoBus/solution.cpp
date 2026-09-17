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
        unsigned ll a,mi,ma;
        cin >> a;
        if(a%2!=0 || a<4)
        {
            cout << -1 << "
";
        }
        else if(a%6==0 && a%4==0)
        {
            mi=a/6;
            ma=a/4;
            cout << mi << " " << ma << "
";
        }
        else if( a%6==0 || a%4==0 || a-4%6==0 || a-8%6==0 || (a-12)%4==0 || (a-6)%4==0 )
        {
 
            mi=(a/6)+1;
            if(a%6==0)
            {
                  mi=(a/6);
            }
            ma=a/4;
            cout << mi << " " << ma << "
";
        }
 
 
 
 
 
    }
 
    checkmate
}