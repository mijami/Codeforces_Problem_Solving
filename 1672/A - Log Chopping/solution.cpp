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
        int n;
        cin >> n;
 
        vector<int>vec;
        ll s=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            if(a>0)
            {
                s+=a-1;
            }
        }
        if(s%2!=0)
        {
            cout << "errorgorn" << "
";
        }
        else
            cout << "maomao90" << "
";
 
 
    }
    checkmate
 
}