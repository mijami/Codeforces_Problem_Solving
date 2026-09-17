#include <bits/stdc++.h>
 
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
        int a;
        string x;
        cin >> a >> x;
        int cnt=0;
        int cnt2=0;
 
        for(int i=0;i<a;i++)
        {
            int k=x[i]-'0';
            if(i%2==0 && k%2!=0)
            {
                cnt++;
            }
            if(i%2!=0 && k%2==0)
            {
                cnt2++;
            }
        }
        if(cnt && a%2!=0)
        {
            cout << 1 << "
";
        }
        else if(cnt==0 && a%2!=0) cout << 2 << "
";
        else if(cnt2==0 && a%2==0) cout << 1 << "
";
        else if(cnt2 && a%2==0) cout << 2 << "
";
 
    }
 
    return 0;
}