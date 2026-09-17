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
        string a;
        cin >> a;
        int cnt=0;
        int n=a.size();
        if(a[0]=='B' || a[n-1]=='A')
        {
            cout << "NO" << "
";
            continue;
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='A')
            {
                cnt++;
            }
            else
                cnt--;
            if(cnt<0)
            {
                flag++;
                break;
            }
        }
        if(flag>0)
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