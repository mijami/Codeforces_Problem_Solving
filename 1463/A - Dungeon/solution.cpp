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
    vector<int>v;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        ll s=a+b+c;
        int flag=0;
        int mn= (min(a,min(b,c)));
        if(s<9 || s%9!=0 || mn <1)
        {
            cout << "NO" << "
";
            continue;
        }
 
        if(s%9==0 && s/9<=mn)
        {
            cout << "YES" << "
";
        }
        else
        {
            cout << "NO" << "
";
        }
 
    }
 
    checkmate
}