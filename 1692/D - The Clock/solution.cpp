#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int s[5]= {600,60,0,10,1};
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int b;
        cin >> b;
        map<int,int>mp;
        int hour,minute;
        int tot=0;
        for (int i = 0; i < 5; i++)
        {
            tot += (int)(a[i] - '0') * s[i];
        }
        int cnt=0;
 
        while(mp[tot]!=1)
        {
            mp[tot]++;
 
            hour =tot/60;
            minute = tot - hour*60;
            string x,y;
            x=to_string(hour);
            y=to_string(minute);
 
            if(x.size()==1 && y.size()==2 && y[1]=='0' && x[0]==y[0])
            {
 
                cnt++;
            }
            else if(x.size()==2 && y.size()==1 && x[1]=='0' && x[0]==y[0])
            {
 
                cnt++;
            }
            else if(x.size()==1 && x.size()==1 && x[0]=='0' && y[0]=='0')
            {
 
                cnt++;
            }
            else if(x.size()==2 && y.size()==2)
            {
                x=x+y;
                y=x;
 
                reverse(y.begin(),y.end());
 
 
                if(x==y)
                {
 
                    cnt++;
                }
            }
            tot+=b;
            if(tot>=1440)
            {
                tot=tot%1440;
            }
 
        }
        cout << cnt << "
";
        //minute
        // minute to hour
        //
    }
 
    checkmate
}