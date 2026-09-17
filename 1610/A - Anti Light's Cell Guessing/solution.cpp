#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if(a==1 && b==1){
            cout << 0 << "
";
        }
        else if(min(a,b)== 1){
            cout << 1 << "
";
        }
        else{
            cout << 2 << "
";
        }
    }
    return 0;
}