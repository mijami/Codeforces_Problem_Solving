#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    double n, t , k ,d;
 
    cin >> n >> t >> k >> d;
 
    double u =ceil(n/k);
    if(t*u > d+t){
        cout << "YES" << "
";
    }
    else {
        cout << "NO" << "
";
    }
 
    return 0;
}