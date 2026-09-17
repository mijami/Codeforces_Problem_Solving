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
        int n=a.size();
        ll s=0;
        ll s2=0;
        if(n>1)
        {
            if(a[0]>a[n-1] && n%2==0)
            {
                for(int i=0; i<n; i++)
                {
                    s+=(a[i]-'a')+1;
                }
 
            }
            else if(a[0]<=a[n-1] && n%2==0)
            {
                for(int i=0; i<n; i++)
                {
                    s+=(a[i]-'a')+1;
                }
 
            }
            else if(a[0]>a[n-1] && n%2!=0)
            {
                for(int i=0; i<n-1; i++)
                {
                    s+=(a[i]-'a')+1;
                }
                s2+=a[n-1]-'a'+1;
            }
            else if(a[0]<=a[n-1] && n%2!=0)
            {
                for(int i=1; i<n; i++)
                {
                    s+=(a[i]-'a')+1;
                }
                s2+=a[0]-'a'+1;
            }
        }
        else if(n==1)
        {
            s2+=a[0]-'a'+1;
        }
        if(s>s2)
        {
            cout << "Alice " << s-s2 << "
";
        }
        else
            cout << "Bob " << s2-s << "
";
 
 
    }
 
    checkmate
}