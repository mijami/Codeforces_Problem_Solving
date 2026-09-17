#include <bits/stdc++.h>
using namespace std;
#define e4 ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define ll long long int
#define checkmate return 0;
 
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        int p,q;
        cin >> n >> p >> q;
        p=(p*60)+q;
        vector<int>vec;
        int mini=9999999;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >>b;
            a=(a*60)+b;
            if(a>=p) mini=min(a-p,mini);
            else
            {
                int x=24*60;
                int y=(x-p) + a;
                mini=min(y,mini);
            }
        }
        int h=mini/60;
        int m= mini-(h*60);
        cout << h << " " << m << "
";
 
 
    }
 
 
 
    checkmate
 
}