#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    e4
 
    int n,m;
    cin >> n >> m;
    
    if(n%2==0)
    {
        if( (n*n)/2 < m )
        {
            cout << "NO" << "
";
            checkmate
        }
    }
    if(n%2!=0)
    {
        int l=n/2;
        int k=n/2+1;
        if((l*l)+(k*k) < m)
        {
            cout << "NO
";
            checkmate;
        }
    }
    cout << "YES" << "
";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==0 && j%2==0 && m)
            {
                cout << "L";
                m--;
            }
            else if(i%2!=0 && j%2!=0 && m)
            {
                cout << "L";
                m--;
            }
            else
            {
                cout << "S";
            }
        }
        cout << "
";
    }
 
 
    checkmate
}