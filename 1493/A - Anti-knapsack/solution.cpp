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
        int n,k;
        cin >> n >> k;
        vector<int>vec;
 
        for(int i=(k+1)/2;i<k;i++)
        {
            if(i<=n) vec.pb(i);
        }
        if(n>k)
        {
            while(n>k)
            {
                vec.pb(n);
                n--;
            }
        }
        cout << vec.size() << "
";
        for(int i:vec)
        {
            cout << i << " ";
        }
        cout << "
";
 
    }
 
    checkmate
}