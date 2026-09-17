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
        int x;
        cin >> x;
        vector<int>vec;
        for(int i=0; i<3; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int cnt=1;
        int k=vec[x-1];
        if(k!=0)
        {
            cnt++;
        }
        k=vec[k-1];
        if(k!=0)
        {
            cnt++;
        }
        if(cnt==3)
        {
            cout << "YES" << "
";
        }
        else
            cout << "NO" << "
";
 
    }
 
 
 
 
    checkmate
}