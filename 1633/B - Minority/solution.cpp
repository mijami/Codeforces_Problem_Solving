#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    string a;
    int t;
 
    cin >> t;
 
    while(t--){
        cin >> a;
        int s= a.size();
        int co=0, cz=0;
        for(int i=0; i<s; i++){
            if(a[i]=='0'){
                cz++;
            }
            else {
                co++;
            }
        }
        if(co==cz){
            cout << cz-1 << "
";
        }
        else if(co>cz){
            cout << cz << "
";
        }
        else {
            cout << co << "
";
        }
    }
    return 0;
}