#include<bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        int l,r;
        int d;
        cin >> n >> d >> l >> r;
        int k=r/d;
        int p=l/d;
        int a=0;
        a=k-p;
        if(l%d==0)
        {
            a=k-p+1;
        }
 
 
        cout << n/d-a << "
";
 
    }
 
 
    return 0;
}