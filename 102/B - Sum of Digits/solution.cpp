#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long int n,m=0;
    string a;
    cin >> a;
    while(a.size()!=1)
    {
        n=0;
        for(int i=0; i<a.size(); i++)
        {
            n+=a[i]-'0';
        }
        a=to_string(n);
        m++;
    }
    cout << m << "
";
 
    checkmate
}