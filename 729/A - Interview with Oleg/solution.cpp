#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t=1;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        vector<char>vec;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='o' && a[i+1]=='g' && a[i+2]=='o')
            {
                vec.pb('*');
                int fl=1;
                while(a[i+1]=='g' && a[i+2]=='o' && i+2<n)
                {
                    if(fl)
                    {
                        vec.pb('*');
                        vec.pb('*');
                        fl=0;
                    }
                    i+=2;
                }
            }
            else
            {
                vec.pb(a[i]);
            }
        }
        for(auto it:vec)
        {
            cout << it;
        }
        cout << "
";
 
    }
 
    return 0;
}