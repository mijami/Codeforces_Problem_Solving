#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string a;
    string b;
 
    cin >> a >> b;
    int n = a.size();
 
    for(int i=0; i<n; i++)
    {
        if(a[i]< 'a'){
            a[i] = a[i] -'A'+ 'a';
 
        }
        if(b[i] < 'a'){
            b[i] = b[i] -'A'+ 'a';
        }
        if(a[i]!= b[i]){
            if(a[i] > b[i]){
                cout << "1"  << "
";
                break;
            }
            if(a[i] < b[i]){
                cout << "-1"  << "
";
                break;
            }
        }
        if(i==n-1 && a[i] == b[i]) {
            cout << "0" << "
";
       }
    }
 
 
    return 0;
}