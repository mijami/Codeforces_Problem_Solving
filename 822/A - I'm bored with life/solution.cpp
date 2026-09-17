#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a,b;
    cin >> a >>b;
    int k=min(a,b);
    int t=k;
    while(k>1)
    {
        k--;
        t=t*k;
    }
    cout << t <<"
";
    checkmate
}