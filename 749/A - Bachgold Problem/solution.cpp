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
    cin >>t;
 
    vector<int>v;
    if(t%2!=0)
    {
        int k=t/2 - 1;
        cout << t/2 << "
";
        while(k--)
        {
            cout << 2 << " ";
        }
        cout << 3 << "
";
    }
    else {
        int k=t/2;
        cout << k << "
";
        while(k--)
        {
            cout << 2 << " ";
        }
        cout << "
";
    }
 
 
 
    checkmate
}