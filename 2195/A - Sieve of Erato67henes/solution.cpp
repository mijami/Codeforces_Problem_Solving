#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#define newline cout << "
";
using namespace std;
 
static const int UNCOLORED = -1;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int t;
    cin >> t;
 
    while(t--)
    {
 
        int n;
        cin >> n;
        int k=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            if(a==67)
            {
                k++;
            }
        }
        if( k>0)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
 
 
    }
 
 
 
    return 0;
}