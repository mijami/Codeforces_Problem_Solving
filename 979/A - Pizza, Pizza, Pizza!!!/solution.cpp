#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        n++;
        if(n==1)
        {
            cout << "0
";
        }
        else if(n%2!=0)
        {
            cout << n << "
";
        }
        else{
            cout << n/2 << "
";
        }
 
 
    }
 
    return 0;
}