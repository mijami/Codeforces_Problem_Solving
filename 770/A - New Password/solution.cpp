#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
 
    int n, k;
    cin >> n >> k;
    string a[50];
    for(int i=0; i<26; i++){
        a[i]='a'+i;
    }
    string f[150];
    int l=0;
 
    for(int i=0; i<n; i++)
    {
        if(i+1 <= k){
            f[i]=a[i];
            cout << f[i];
 
        }
        else{
            f[i]=f[l];
            l++;
            cout << f[i];
        }
    }
    cout << "
";
    return 0;
}