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
    cin >> a >> b;
    ll k=0;
    map<int,int>mp;
    for(int i=1;i<=b;i++)
    {
        mp[i%5]++;
    }
    int l;
    for(int i=1;i<=a;i++)
    {
        if(i%5!=0)
            {
               l=5-(i%5);
            }
        else l=0;
        k+=mp[l];
    }
    cout << k << "
";
 
    checkmate
}
/*
2 3
3 2
4 1
7 3
8 2
*/