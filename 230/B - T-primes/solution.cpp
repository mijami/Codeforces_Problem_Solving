#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define M 1000000
bool marked[M+1];
void sieve(int n) {
  for (int i = 2; i < n; i++) {
    if (marked[i] == false) {
      for (int j = i + i; j <= n; j += i) {
        marked[j] = true;
      }
    }
  }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    sieve(1000000);
    while(t--)
    {
        ll a;
        cin >> a;
 
        ll n = sqrt(a);
        if(n*n != a || a==1)
        {
            cout << "NO" << "
";
            continue;
        }
        else if( marked[n]==false )
        {
            cout << "YES" << "
";
            continue;
        }
        else
            cout << "NO" << "
";
    }
 
    checkmate
 
}