#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    string a;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>> n;
        cin >> a;
        for(int I=0; I<a.size(); I++)
        {
            if(a[I]=='U'){
                cout << "D";
            }
            else if(a[I]=='D'){
                cout << "U";
            }
            else
                cout << a[I];
        }
        cout << "
";
    }
    return 0;
}