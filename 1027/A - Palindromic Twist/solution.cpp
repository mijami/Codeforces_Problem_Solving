#include <bits/stdc++.h>
#define pb push_back
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
        int n;
        cin >> n;
        string a;
        cin >> a;
        int j=n-1;
        int i=0;
        int flag=0;
        while(i<n/2)
        {
            if(a[i]==a[j])
            {
                j--;
                i++;
            }
 
            else if(a[i]!=a[j])
            {
                int x=a[i]-'0';
                int y=a[j]-'0';
                int k=(x+y)/2;
                if((x+y) % 2==0 && abs(k-x)==1 && abs(k-y)==1 )
                {
                    i++;
                    j--;
                }
                else
                {
                    flag++;
                    break;
                }
            }
        }
        if(flag) cout << "NO
";
        else cout << "YES
";
 
 
    }
 
    return 0;
}