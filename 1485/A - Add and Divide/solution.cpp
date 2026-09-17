#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define for(i,n) for(int i=0;i<n;i++)
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        if(a==0)
        {
            cout << 0 << "
";
        }
        else
        {
            int k=a+b;
            for(i,100)
            {
                int b1=b+i;
                if(b1==1) continue;
                int m=i;
                int a1=a;
                while(a1)
                {
                    a1=a1/b1;
                    m++;
                }
                k=min(k,m);
                
            }
            cout << k << "
";
        }
    }
 
    checkmate
}