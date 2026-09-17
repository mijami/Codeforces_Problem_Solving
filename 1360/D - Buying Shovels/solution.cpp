#include <bits/stdc++.h>
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
        int a,b;
        cin >> a >> b;
        if(b>=a)
        {
            cout<< 1 << "
";
            continue;
        }
        int n=sqrt(a);
        int k=-99999;
        for(int i=1;i<=min(n,b);i++)
        {
            if(a%i==0 && a/i<=b)
            {
                k=max(k,a/i);
            }
            else if(a%i==0 && i<=b)
            {
                k=max(k,i);
            }    
        }
        cout << a/k << "
";
    }
    return 0;
}
 