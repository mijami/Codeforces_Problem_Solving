#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    int a;
    cin >> t;
    while(t--)
    {
        int b;
        int flag=0;
        cin >> a;
        if(a/10==0 && a%2 != 0){
            cout << -1 << "
";
        }
        if(a%2==0)
        {
            cout << 0 << "
";
        }
 
        if(a/10 != 0 && a%2 != 0)
        {
 
            while(a){
                a=a/10;
                if(a%2==0 && a!=0){
                    flag++;
                }
 
                if(a>0){
                    b=a;
                }
                if(a==0){
                    break;
                }
            }
            if(flag==0){
                cout << -1 << "
";
            }
            else if(b%2 !=0 && flag !=0){
                cout << 2 << "
";
            }
            else{
                cout << 1 << "
";
            }
        }
 
    }
 
 
    return 0;
}