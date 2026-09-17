#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
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
 
        int n,m;
        cin >> n >> m;
        string a;
        cin >> a;
        string b;
        cin >> b;
        if(a==b)
        {
            cout << "0
";
            continue;
        }
        int cnt=0;
        int flag=0;
        for(;;)
        {
            if(n>m)
            {
 
                for(int j=0; j<a.size(); j++)
                {
                    if(a.substr(j,m)==b)
                    {
                        flag++;
                        break;
                    }
                }
 
            }
 
 
 
            if(flag==1) break;
            a+=a;
            cnt++;
            //cout << a << " ";
            if(a.size()>=m)
            {
 
                for(int j=0; j<a.size(); j++)
                {
                    if(a.substr(j,m)==b)
                    {
                        flag++;
                        break;
                    }
                }
                if(a.size()>m*2 )
                {
                    //cout << "H";
                    break;
                }
 
            }
        }
        if(flag)
        {
            cout << cnt << "
";
        }
        else
        {
            cout << "-1
";
        }
 
 
    }
 
 
    return 0;
}