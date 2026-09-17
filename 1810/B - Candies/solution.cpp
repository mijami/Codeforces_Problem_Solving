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
        if(n%2==0)
        {
            cout << "-1
";
        }
        else
        {
 
            vector<int>vec;
            while(n!=1)
            {
                if( (n+1)/2 %2==0)
                {
                    vec.pb(2);
                    n=(n-1)/2 ;
                }
                else if( (n-1)/2 %2==0)
                {
                    vec.pb(1);
                    n=(n+1)/2 ;
                }
            }
            cout << vec.size() << "
";
            for(int i=vec.size()-1; i>=0; i--)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
 
        }
 
 
    }
    return 0;
}
 
 