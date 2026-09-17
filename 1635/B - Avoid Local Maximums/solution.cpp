#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    int a;
    int l;
 
    while(t--)
    {
        vector<int > v;
        int n;
        int j=1;
        cin >> n;
        l=0;
        for(int i=0; i<n; i++)
        {
            cin >> a;
            v.push_back(a);
 
        }
        for(int i=1; i<n-1; i++)
        {
            if(v[i] > v[i+1] && v[i] > v[i-1] )
            {
                if(i+2<n)
                {
                    v[i+1]= max(v[i],v[i+2]);
                    l++;
                }
                else
                {
                    v[i+1] = v[i];
                    l++;
                }
            }
        }
        cout << l << "
";
        for(int i=0; i<n; i++)
        {
            cout << v[i] << " ";
        }
        cout << "
";
 
    }
 
 
    return 0;
}