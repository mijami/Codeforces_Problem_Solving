#include <bits/stdc++.h>
using namespace std;
#define pb push_back
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
        if(n==1)
        {
            cout << 0 << "
";
            continue;
        }
        long long int x=0;
        long long int k=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='L')
            {
                k+=i;
            }
 
            if(a[i]=='R')
            {
                k+=(n-i-1);
            }
        }
        for(int i=n-1; i>=(n/2); i--)
        {
            x+=i;
        }
        for(int i=n/2+1; i<n; i++)
        {
            x+=i;
        }
        if(n%2==0)
        {
            x+=n/2;
        }
        int i=0;
        int j=n-1;
        int cnt=0;
        while(i<j)
        {
            if(a[i]=='L' && i<(n/2-1))
            {
 
                if(k+(n-i-1) > k-i)
                {
                    k+=(n-i-1);
                    k-=i;
                    cout << k << " ";
                    cnt++;
                }
            }
            if(a[j]=='R' && j>(n/2 - 1))
            {
                if(k+j > k-(n-j-1))
                {
                    k+=j;
                    k-=(n-j-1);
                    cout << k << " ";
                    cnt++;
                }
            }
            i++;
            j--;
            if(i>=j)
            {
                break;
            }
        }
        while(cnt<n)
        {
            cout << x << " ";
            cnt++;
        }
        cout << "
";
    }
 
 
    return 0;
}