#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    vector<int>v;
    while(t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        int r=0,bl=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>b[i])
            {
                r++;
            }
            else if(a[i]<b[i])
            {
                bl++;
            }
 
 
        }
 
        if(r>bl)
        {
            cout << "RED" << "
";
        }
        else if(r<bl){
            cout << "BLUE" << "
";
        }
        if(r==bl)
        {
            cout << "EQUAL" << "
";
        }
 
 
    }
 
 
 
    checkmate
}