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
        int n;
        string a;
        cin >> n;
        cin >> a;
        int zero=0,one=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='0')
            {
                zero++;
            }
            else
                one++;
        }
        if(zero>1 || one >1)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
    }
 
    checkmate
}