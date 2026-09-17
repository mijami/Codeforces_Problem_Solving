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
        int type;
        if(a%3==1)
        {
            type=1;
        }
        else type=2;
 
        int sum=0;
        while(sum!=a)
        {
            cout << type;
            sum+=type;
            type=3-type;
        }
        cout << "
";
    }
 
    checkmate
}