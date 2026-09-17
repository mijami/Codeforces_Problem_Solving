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
        string a;
        cin >> a;
        int i=n/2;
        int cnt=1;
 
        for(i<n;;)
        {
            if(a[i]==a[i+1] && i+1<n)
            {
                cnt++;
            }
            else
                break;
            i++;
        }
        i=n/2;
        for(i>=0;;)
        {
            if(a[i]==a[i-1] && i-1>=0)
            {
                cnt++;
            }
            else
                break;
            i--;
        }
        cout << cnt << "
";
    }
 
    checkmate
}