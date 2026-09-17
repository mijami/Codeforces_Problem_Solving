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
        int e=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            double x= sqrt(a);
            a=sqrt(a);  
            if(x-a>0)
            {
                e=1;
            }
        }
        if(e) cout << "YES" << "
";
        else cout << "NO" << "
";
       
    }
 
    return 0;
}