#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);    cout.tie(0);
 
    int t;
    cin >> t;
    string a;
    map<string, bool> mp;
 
    while (t--){
        cin >> a;
        if(mp[a]){
            cout << "YES" <<"
";
        }
        else cout << "NO" << "
";
        mp[a] =1;
    }
    return 0;
}