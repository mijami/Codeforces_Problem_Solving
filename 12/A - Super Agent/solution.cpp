#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    string a , b, c;
    cin >> a >> b >> c;
    
    if(b[0]!=b[2])
    {
        cout << "NO" << "
";
    }
    else if(a==b && b==c)
    {
        cout << "YES" << "
";
    }
    else if(a==c){
        cout << "YES" << "
";
    }
    else if(a!=c && a[0]==c[2] && a[1]==c[1]&& a[2]==c[0]){
        cout << "YES" << "
";
    }
    else  {
        cout << "NO" << "
";
    }
 
 
    //cout << i << "
";
 
    checkmate
}