#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long int n;
    cin >> n;
    long long int i=n/2;
    if(n==1)
    {
        cout << 1 << "
";
        checkmate
    }
    
    if(n/i>=2){
        i++;
    }
    
    cout << i << "
";
 
    checkmate
}