#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
using namespace std;
 
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        string a;
        cin >> a;
        if(a[0]!='3' && a[0]!='6' && a[0]!='9')
        {
            cout << a[0] << "3
";
        }
        else if(a[0]=='3' || a[0]=='6')
        {
            cout << a[0] << "1
";
        }
        else
        {
            cout << a[0] << "7
";
        }
 
    }
 
 
 
}
 
 