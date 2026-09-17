#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4;  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
 
 
int main()
{
    e4;
 
    int t;
    cin >> t;
    while(t--)
    {
        int n,r,b;
        cin >> n >> r >> b;
 
        int bi=b+1;
        int ri=r/bi;
        bool red=1;
        for(int i=0; i<n; i++)
        {
            if(red)
            {
                for(int j=0; j<ri; j++)
                {
                    cout << "R";
                }
                r=r-ri;
                red=0;
            }
            else if(b!=0)
            {
                cout << "B";
                b--;
                bi=b+1;
                ri=r/bi;
                red=1;
            }
        }
        cout << "
";
 
 
    }
 
    checkmate
}
 