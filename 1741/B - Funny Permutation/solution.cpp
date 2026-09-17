#include <bits/stdc++.h>
#define pb push_back
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
        int n;
        cin >> n;
        if(n==1 || n==3)
        {
            cout << "-1
";
            continue;
        }
        cout << n << " " << n-1 << " ";
        for(int i=1;i<n-1;i++)
        {
            cout << i<< " ";
        }
        cout << "
";
 
 
    }
 
    return 0;
}