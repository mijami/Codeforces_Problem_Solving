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
        int a,b;
        cin >> a >> b;
        ll s=0;
        int x =a-1;
        int k=b;
 
        for(int i=1;i<=b;i++)
        {
            s+=i;
        }
        while(x--)
        {
 
            b=b+k;
            s+=b;
        }
 
        cout << s << "
";
    }
 
    checkmate
}