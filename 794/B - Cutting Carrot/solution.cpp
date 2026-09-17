#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    //cin >> t;
    int cas=0;
    while(t--)
    {
        double n,h;
        cin >> n >> h;
 
        for(int i=1;i<n;i++)
        {
            cout << fixed <<setprecision(12)<< sqrt(i/n)*h << " ";
        }
 
 
    }
    return 0;
}