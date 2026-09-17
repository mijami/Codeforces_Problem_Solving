#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
using namespace std;
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string a;
        cin >> a;
        if(k%2==0)
        {
            sort(a.begin(),a.end());
            cout << a << "
";
        }
        else
        {
            string b="",c="";
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    b+=a[i];
                }
                else
                {
                    c+=a[i];
                }
            }
            sort(b.begin(),b.end());
            sort(c.begin(),c.end());
 
            int I=0,J=0;
            string d="";
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    d+=b[I];
                    I++;
                }
                else
                {
                    d+=c[J];
                    J++;
                }
            }
            /*
            int in=0;
            int en=0;
            for(int i=0;i<n-1;i++)
            {
                if(d[i]>d[i+1] && in==0)
                {
                    in=i;
                }
                if(d[i]>d[i+1])
                {
                    en=i+1;
                }
            }
            */
 
            //reverse(d.begin()+in,d.begin()+en+1);
            cout << d ;
            cout << "
";
 
        }
 
 
 
 
 
 
    }
 
 
 
}
 
 