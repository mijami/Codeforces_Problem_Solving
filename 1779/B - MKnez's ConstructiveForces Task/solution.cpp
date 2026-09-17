#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==0)
        {
            cout << "YES
";
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << "-1" << " ";
                }
            }
            cout << "
";
        }
        else if(n==3)
        {
            cout << "NO
";
        }
        else
        {
            int k= n/2;
            int y= k-1;
            cout << "YES
";
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout << y << " ";
                }
                else
                {
                    cout << "-" << k << " ";
                }
            }
            cout << "
";
        }
 
    }
    return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 