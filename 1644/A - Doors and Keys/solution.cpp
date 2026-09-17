#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    string a;
 
 
    while(t--)
    {
        cin >> a;
        int l=0;
        map<char,int>mp;
 
        for(int i=0; i<6;i++){
            if(a[i]=='r' || a[i]=='g' || a[i]=='b')
            {
                mp[a[i]]++;
            }
            if(a[i]=='R' && mp['r']==0){
                cout << "NO" <<"
";
                l++;
                break;
            }
            else if(a[i]=='G' && mp['g']==0){
                cout << "NO" <<"
";
                l++;
                break;
            }
            else if(a[i]=='B' && mp['b']==0){
                cout << "NO" <<"
";
                l++;
                break;
            }
 
        }
        if(l==0){
            cout << "YES" << "
";
        }
    }
 
 
 
    return 0;
}