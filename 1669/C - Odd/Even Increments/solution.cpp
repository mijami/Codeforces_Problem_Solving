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
        map<int,int>mp;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int x=0,y=0;
        int l=0,m=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(vec[i]%2==0)
                {
                    x++;
                }
                else
                {
                    y++;
                }
            }
 
            else
            {
                if(vec[i]%2==0)
                {
                    l++;
                }
                else m++;
            }
        }
        if(x && y)
        {
            cout << "NO" << "
";
        }
        else if(l && m)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
 
 
 
 
    }
 
    checkmate
}