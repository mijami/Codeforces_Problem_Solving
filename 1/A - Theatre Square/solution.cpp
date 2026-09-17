#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    long long int n,m, a;
    cin >> n >> m >>a;
 
    long long int k, l;
    k=n/a;
    l=m/a;
    if(n%a!=0)
    {
        k++;
    }
    if(m%a!=0)
    {
        l++;
    }
    cout << l*k << "
";
 
    return 0;
}
 
 