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
        if(n==2)
        {
            cout << "2 1
";
        }
        else if(n==1)
        {
            cout << 1 << "
";
        }
        else if(n%2!=0)
        {
            cout << 1 << " ";
            int e=2,o=3;
 
            for(int i=0; i<n-1; i++)
            {
                if(i%2==0)
                {
                    cout << o << " ";
                    o+=2;
                }
                else
                {
                    cout << e << " ";
                    e+=2;
                }
            }
            cout << "
";
 
        }
        else if(n%2==0)
        {
            int e=2,o=1;
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout << e << " ";
                    e+=2;
                }
                else
                {
                    cout << o << " ";
                    o+=2;
                }
            }
            cout << "
";
        }
 
    }
 
 
    checkmate
}