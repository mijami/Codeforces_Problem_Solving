#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
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
        int x,y,n;
        cin >> x >> y >> n;
        vector<int>vec;
        int k=1;
        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(y>x)
            {
                vec.pb(y);
            }
            else{
                flag++;
            }
            y=y-k;
            k++;
        }
        if(y<x)
        {
 
            flag++;
        }
        if(flag)
        {
            cout << "-1
";
        }
        else
        {
            vec.pb(x);
            sort(vec.begin(),vec.end());
            for(int i=0; i<n; i++)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
        }
 
 
 
 
    }
 
 
 
}
 
 