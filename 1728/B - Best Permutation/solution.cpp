#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k=2;
        int j=1;
        if(n%2==0)
        {
 
 
            for(int i=1; i<=n-2; i++)
            {
                if(i%2!=0)
                {
                    cout << k << " ";
                    k+=2;
                }
                else
                {
                    cout << j << " ";
                    j+=2;
                }
            }
            cout << n-1 << " " << n << "
";
        }
        else
        {
            int z=n-2;
            if(z%3==0)
            {
                for(int i=1; i<=n; i++)
                {
                    cout << i << " ";
                }
                cout << "
";
            }
            else if(z%3==2)
            {
                cout << n-2 << " ";
                for(int i=1;i<n-2;i++)
                {
                    cout << i << " ";
                }
                cout << n-1 << " " << n << "
";
            }
            else if(z%3==1)
            {
                vector<int>vec;
                for(int i=1;i<=n;i++)
                {
                    vec.pb(i);
                }
                swap(vec[2],vec[3]);
                swap(vec[3],vec[4]);
                for(int i=0;i<vec.size();i++)
                {
                    cout << vec[i] << " ";
                }
                cout << "
";
            }
        }
 
    }
 
    checkmate
}