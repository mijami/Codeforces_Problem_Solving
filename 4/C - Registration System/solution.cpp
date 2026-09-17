#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    string a;
    map<string, int> mp;
    while(t--){
        cin >> a;
        if(mp[a]==0){
 
            cout << "OK"<<"
";
        }
        else cout << a << mp[a] << "
";
        mp[a]++;
 
    }
    return 0;
}