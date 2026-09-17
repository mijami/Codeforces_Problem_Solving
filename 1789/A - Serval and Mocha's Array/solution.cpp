#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int flag=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(__gcd(vec[i],vec[j])<=2)
                {
                    flag++;
                }
            }
        }
        if(flag) cout << "YES
";
        else cout << "NO
";
    }
   
 
    cout << "
";
 
    return 0;
}