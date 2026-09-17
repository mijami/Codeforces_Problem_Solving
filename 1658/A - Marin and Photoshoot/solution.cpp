#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int n;
 
        cin >> n;
        cin >>s;
        int coun=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                coun+=2;
            }
            else if(s[i]=='1' && s[i-1]=='0' && s[i+1]=='0')
            {
                coun+=1;
            }
 
 
        }
        cout << coun << "
";
    }
 
    checkmate
}