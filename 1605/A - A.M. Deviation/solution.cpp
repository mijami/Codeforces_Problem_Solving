#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
 
    cin >> t;
    long long int a, b,c;
    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;
 
        long long int sum= a+b+c;
        long long k=sum/3;
        if(k*3==sum){
            cout << "0" << "
";
        }
        else{
            cout << "1" << "
";
        }
    }
 
    return 0;
 
}