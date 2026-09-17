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
        int x;
        cin >> x;
        int a=1;
        for(int i=2;i*i<=x;i++)
        {
            if(x%i==0)
            {
                a=x/i;
                break;
            }
        }
        cout << a << " "<< x-a << "
";
 
    }
 
 
    return 0;
}