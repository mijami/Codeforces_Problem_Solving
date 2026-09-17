#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
 
    while(t--)
    {
        int x=0,y=0;
        int n;
        cin >> n;
        string a;
        cin >> a;
        int cnt=n;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[n-1])
            {
                cnt-=2;
                n--;
            }
            else
            {
                break;
            }
 
        }
        cout << cnt << "
";
 
    }
    return 0;
}