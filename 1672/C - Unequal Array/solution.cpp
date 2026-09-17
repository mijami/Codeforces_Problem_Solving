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
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int in=-1;
        int f=-1;
        for(int i=0; i<n-1; i++)
        {
            if(vec[i]==vec[i+1])
            {
                in=i+1;
                break;
            }
        }
        for(int i=n-1;i>0;i--)
        {
            if(vec[i]==vec[i-1])
            {
                f=i-1;
                break;
            }
        }
        if(f==in && f!=-1)
        {
            cout << 1 << "
";
        }
        else if(f>in)
        {
            cout << f-in << "
";
        }
        else 
            cout << 0 << "
";
            
 
    }
 
    checkmate
}