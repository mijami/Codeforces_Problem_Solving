#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    int cas=0;
    while(t--)
    {
 
        int n;
        cin >> n;
        int a=n*2;
        int b=2;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout << b << " ";
                b+=2;
            }
            else
            {
                cout << a << " ";
                a-=2;
            }
        }
        cout << "
";
        a=n;
        a+=1;
        b=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                cout << a << " ";
                a+=2;
            }
            else
            {
                cout << b << " ";
                b+=2;
            }
        }
        cout << "
";
    }
    return 0;
}
 
 