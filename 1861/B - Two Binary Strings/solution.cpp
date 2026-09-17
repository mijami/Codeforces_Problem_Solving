#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
using namespace std;
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        string a,b;
        cin >> a >> b;
        int flag=0;
 
        for(int i=0;i<a.size()-1;i++)
        {
            if(a[i]=='0' && a[i+1]==b[i+1] && a[i]==b[i] && a[i+1]=='1')
            {
                flag++;
            }
        }
        cout << (flag? "YES
":"NO
");
 
    }
 
 
 
 
 
}