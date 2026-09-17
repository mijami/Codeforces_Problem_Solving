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
        if(n==1)
        {
            cout << "1
";
        }
        else if(n%2)
        {
            cout << "-1
";
 
        }
        else
        {
            
            for(int i=2;i<=n;i+=2)
            {
                cout << i << " " << i-1 << " ";
            }
            cout << "
";
        }
    }
    return 0;
}
 
 