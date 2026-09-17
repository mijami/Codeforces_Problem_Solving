#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    e4
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "ans";
    for(int i=0;i<n;i++)
    {
        string t="0";
        for(int j=1;j<n;j++)
        {
            t+=(char)((s[j]-s[0]+10)%10 +'0');
        }
        ans=min(ans,t);
        rotate(s.begin(),s.begin()+1,s.end() );
    }
    cout << ans;
    checkmate
}