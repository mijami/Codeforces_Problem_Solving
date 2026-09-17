#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int t,a;
    cin >> t;
    while(t--){
        cin >> a;
        if(a%7==0)
        {
            cout << a << "
";
        }
        else{
            int k= a%10;
            k=a-k;
            a=a/7;
            if(a*7<k){
                cout << (a+1)*7 << "
";
            }
            else{
                cout << a*7 << "
";
            }
        }
 
    }
    return 0;
}