#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a,b,n,s;
        cin >> a >> b >> n >> s;
        long long int x;
        if(s>=(n*a))
        {
            x=s-(n*a);
        }
        else
        {
            x=s/n;
            x=s- (n*x);
        }
        if(x<=b)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
    }
    return 0;
}
 
 