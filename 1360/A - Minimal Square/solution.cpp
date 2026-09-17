#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    int a, b;
    while (t--){
        cin >> a >> b;
        int mi= min(a,b);
        int ma = max(a,b);
        mi = mi*2;
        ma= max(mi, ma);
        ma= ma*ma;
        cout << ma << "
";
    }
 
    return 0;
}