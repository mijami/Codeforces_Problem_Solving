#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long int t;
    long long int a,b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
 
        long long int k= min(a,b);
        long long int sum=a+b;
        if(sum < 4 || a<1 || b <1)
        {
            cout << 0 << "
";
        }
 
        else
        {
            while(k!=0)
            {
 
                if(k >= sum/4){
                    k=sum/4;
                }
                if(sum >= k*4)
                {
                    cout << k << "
";
                    break;
                }
 
            }
        }
    }
 
 
 
    return 0;
}