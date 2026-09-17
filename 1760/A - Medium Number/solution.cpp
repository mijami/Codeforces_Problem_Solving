#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a>b)
        {
            swap(a,b);
        }
        if(b>c)
        {
            swap(b,c);
        }
        if(a > b)
        {
            swap(a,b);
        }
        cout << b << "
";
 
    }
 
 
    return 0;
}