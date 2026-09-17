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
        int a=2,b=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                vec.pb(b);
                b+=2;
            }
            else
            {
                vec.pb(a);
                a+=2;
            }
        }
        if(n==1)
        {
            cout << 1 << "
";
            continue;
        }
        if(n%2!=0 && n>1)
        {
            vec[n-1]=vec[n-2];
            vec[n-2]=n;
        }
        for(int i=0;i<n;i++)
        {
            cout << vec[i] << " ";
        }
 
        cout << "
";
    }
 
    checkmate
}