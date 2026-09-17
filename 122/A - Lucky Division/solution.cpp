#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
//    4 7 44 47 77 444 447  477 774 747
    int n;
    cin >> n;
    if(n%4==0 || n%7==0  || n%47==0 || n%74==0 || n%447==0 || n%477==0 || n%474==0 || n%744==0
       || n%747==0  || n%774==0  )
    {
        cout << "YES
";
    }
    else
    {
        cout << "NO
";
    }
 
    checkmate
}