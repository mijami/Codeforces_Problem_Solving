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
        int n,m;
        cin >> n >> m;
        cout << n*m << "
";
        int k;
        for(int i=0;i<n;i++)
        {
            k=i+1;
            for(int j=0;j<8;j++)
            {
                k=k*4;
            }
            for(int j=m-1;j>=0;j--)
            {
                cout << j+k << " ";
            }
            cout << "
";
 
 
        }
 
    }
 
    return 0;
}