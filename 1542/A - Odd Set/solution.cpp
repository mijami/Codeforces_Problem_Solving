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
        int n;
        cin >> n;
        vector<int>vec;
        int odd=0,even=0;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin >> a;
            if(a%2==0)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if(odd==even)
        {
            cout << "Yes" << "
";
        }
        else cout << "No
";
    }
 
    checkmate
}