#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >>t;
    int s=0;
    map <int , int > mp;
    while(t--){
        int a;
        cin >> a;
        mp[a]++;
        s=max(s,mp[a]);
 
    }
    cout << s << "
";
 
    return 0;
}