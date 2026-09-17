#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    int k=0;
    int mx=-999999;
    string a;
    while(cin >> a)
    {
        k=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>='A' && a[i]<='Z')
            {
                k++;
            }
        }
        mx=max(mx,k);
    }
    cout << mx << "
";
 
    checkmate
}