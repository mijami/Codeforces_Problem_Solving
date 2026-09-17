#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    int cas=0;
    while(t--)
    {
        string a;
        cin >> a;
        int cnt=1;
        int flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='?' && i==0)
            {
                cnt=cnt*9;
                flag=1;
            }
            else if(a[i]!='0' && a[i]!='?')
            {
                flag=1;
            }
 
            else if(a[i]=='?' && flag)
            {
                cnt=cnt*10;
            }
            else if(a[i]=='?' && flag==0)
            {
                cnt=cnt*9;
                flag=1;
            }
        }
        if(a[0]=='0')
        {
            cout << "0
";
        }
        else if(cnt ==1 && a[0]=='0')
        {
            cout << "0
";
        }
        else if(cnt == 1)
        {
            cout << "1
";
        }
        else cout << cnt << "
";
 
 
    }
    return 0;
}
 
 