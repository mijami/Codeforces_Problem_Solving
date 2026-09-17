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
        ll s=0;
        ll k=0;
 
        while(n/10>0)
        {
            s=(n/10)*10; //10
            k+=s;
            n= (n-s) + (s*.1); //10
        }
        k+=n;
        cout << k << "
";
 
    }
 
    checkmate
}