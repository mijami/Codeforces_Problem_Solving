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
        string a;
        cin >> a;
        int maxpref=0;
        int minnotpref=0;
        int ans=1;
        int cnt=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='+')
            {
                cnt++;
            }
            else if(a[i]=='-')
            {
                cnt--;
                maxpref=min(cnt,maxpref);
                if(cnt<minnotpref)
                {
                    minnotpref=0;
                }
            }
            else if(a[i]=='1')
            {
                maxpref=max(maxpref,cnt);
            }
            else
            {
                if(cnt<=1)
                {
                    ans=0;
                    break;
                }
                if(minnotpref==0 || minnotpref==cnt)
                {
                    minnotpref=cnt;
                }
            }
            if(minnotpref<=maxpref && minnotpref!=0)
            {
                ans=0;
                break;
            }
        }
 
        cout << (ans? "YES
" :"NO
");
    }
 
 
 
 
 
}