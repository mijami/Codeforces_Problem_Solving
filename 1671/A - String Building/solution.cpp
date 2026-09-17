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
        int k=0;int  l=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='a')
            {
                l=0;
                k++;
            }
            if(a[i]=='a' && a[i+1]=='b')
            {
                if(k==1)
                {
                    break;
                }
            }
            if(a[i]=='b')
            {
                k=0;
                l++;
            }
            if(a[i]=='b' && a[i+1]=='a')
            {
                if(l==1)
                {
                    break;
                }
            }
        }
        if(k==1 || l==1)
        {
            cout << "NO" << "
";
        }
        else
            cout << "YES" << "
";
    }
}