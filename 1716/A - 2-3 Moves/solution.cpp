#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int a;
        cin >> a;
        if(a%3==0)
        {
            cout << abs(a/3) << "
";
        }
        else if(a==1 || a==-1){
            cout << "2" << "
";
        }
        else
        {
            cout << abs(a/3)+1 << "
";
        }
 
    }
 
    checkmate
}