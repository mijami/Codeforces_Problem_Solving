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
        string a,b;
        cin >> a >> b;
        int flag=0;
        for(int i=0;i<m-1;i++)
        {
            if(b[i]==b[i+1])
            {
                flag++;
            }
        }
        int cnt=0;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1])
            {
                cnt++;
            }
        }
        if(flag && cnt)
        {
            cout << "No
";
        }
        else if(cnt==0)
        {
            cout << "YES
";
        }
        else if(cnt && flag==0)
        {
            for(int i=0;i<n-1;i++)
            {
                if(a[i]==a[i+1])
                {
                    if(a[i]==b[0] || b[m-1]==a[i])
                    {
                        flag++;
                        break;
                    }
                }
            }
            if(flag)
            {
                cout << "No
";
            }
            else
            {
                cout << "Yes
";
            }
        }
 
    }
 
 
    return 0;
}