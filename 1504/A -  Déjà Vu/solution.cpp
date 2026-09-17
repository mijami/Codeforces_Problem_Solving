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
 
 
        string b;
 
        int flag=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]!='a' && flag==0)
            {
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout << "NO" << "
";
            continue;
        }
        else
            b=a+'a';
            string c=b;
            reverse(c.begin(),c.end());
            if(b!=c)
            {
                cout << "YES" << "
";
                cout << b << "
";
            }
            else
            {
                cout << "YES" << "
";
                cout << 'a'+a << "
";
            }
 
    }
 
    checkmate
}