#include <bits/stdc++.h>
 
using namespace std;
 
#define e4 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define checkmate return 0;
#define pb push_back
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string a;
        cin >> a;
        string b=a;
        reverse(a.begin(),a.end());
        if(a==b || k==0)
        {
            cout << "1" << "
";
        }
        else
        {
            cout << "2" << "
";
        }
    }
 
    checkmate
}