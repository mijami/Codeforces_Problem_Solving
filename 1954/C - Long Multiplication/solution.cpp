#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#define newline cout << "
";
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
 
        int k=0;
        for(int i=0;i<a.size();i++)
        {
 
           if(b[i]>a[i] && k==0)
           {
               swap(a[i],b[i]);
               k=1;
           }
           else if(a[i]>b[i] && k==0)
           {
               swap(a[i],b[i]);
               k=2;
           }
           else if(k==1 && b[i]<a[i])
           {
               swap(a[i],b[i]);
           }
           else if(k==2 && b[i]>a[i])
           {
               swap(a[i],b[i]);
           }
 
        }
        cout << a << "
" << b << "
";
 
    }
 
 
    return 0;
}