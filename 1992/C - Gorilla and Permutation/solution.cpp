#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,m;
        cin >> n >> m >> k;
        vector<int>vec;
        for(int i=max(n,k);i>=m+1;i--)
        {
            cout << i << " ";
        }
        for(int i=1;i<=m;i++)
        {
            cout << i << " ";
        }
        cout << "
";
 
 
 
 
    }
 
    return 0;
}
 
 