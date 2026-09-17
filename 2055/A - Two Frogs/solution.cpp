#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n,a,b;
        cin >> n >> a >> b;
        int ans=abs(a-b);
        if(ans%2==0)
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
 
 