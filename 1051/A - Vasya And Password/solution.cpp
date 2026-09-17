#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
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
        string a;
        cin >> a;
        int n=a.size();
        int s=0;
        int d=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<='z' && a[i]>='a')
            {
                s++;
            }
            else if(a[i]<='Z' && a[i]>='A')
            {
                b++;
            }
            else if(a[i]>='0' && a[i]<='9')
            {
                d++;
            }
        }
        if(s&& b && d)
        {
            cout << a << "
";
            continue;
        }
        if(s==0 )
        {
            if(b>1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='Z' && a[i]>='A')
                    {
                        a[i]='z';
                        b--;
                        s++;
                        break;
                    }
                }
            }
            else if(d>1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='9' && a[i]>='0')
                    {
                        a[i]='z';
                        d--;
                        s++;
                        break;
                    }
                }
            }
        }
        if(b==0 )
        {
            if(d>1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='9' && a[i]>='0')
                    {
                        a[i]='Z';
                        d--;
                        b++;
                        break;
                    }
                }
            }
            else if(s>1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='z' && a[i]>='a')
                    {
                        a[i]='Z';
                        s--;
                        b++;
                        break;
                    }
                }
            }
        }
        if(d==0 )
        {
 
            if(b>1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='Z' && a[i]>='A')
                    {
                        a[i]='0';
                        b--;
                        break;
                    }
                }
            }
            else if(s>1)
            {
 
                for(int i=0;i<n;i++)
                {
                    if(a[i]<='z' && a[i]>='a')
                    {
                        a[i]='0';
                        s--;
                        break;
                    }
                }
            }
        }
        cout << a << "
";
    }
 
    return 0;
}