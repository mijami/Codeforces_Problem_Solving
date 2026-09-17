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
        int a;
        cin >> a;
        if(a%2!=0)
        {
            int i = a/2 + 2;
            int j=i-4;
            if(i%2==0)
            {
                i=i-1; j=j+1;
            }
            int k=1;
            cout << i << " "  << j << " " << k <<"
";
        }
        else
        {
            int i = a/2 -1;
            int j=i+1;
            int k=1;
            cout << i << " "  << j << " " << k <<"
";
        }
    }
 
    checkmate
}