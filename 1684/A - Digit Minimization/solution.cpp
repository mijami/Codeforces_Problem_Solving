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
        string a;
        cin >> a;
        char x='9';
 
 
        if(a.size()==2)
        {
            cout << a[1] << "
";
        }
        else
        {
            sort(a.begin(),a.end());
            cout << a[0] << "
";
        }
    }
 
    checkmate
}