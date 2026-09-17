#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string a,b;
    cin >> a >>b;
    int n=max(a.size(), b.size());
    int k= min(a.size(),b.size());
 
    if(a==b)
    {
        cout << "-1" << "
";
    }
    else{
        cout << n << "
";
    }
    checkmate
}
 