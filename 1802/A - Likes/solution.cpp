#include <bits/stdc++.h>
#define pb push_back
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
        int n;
        cin >> n;
        vector<int>vec;
        int neg=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a<0) neg++;
        }
        int a=0;
        for(int i=0;i<n-neg;i++)
        {
            a++;
            cout << a << " ";
        }
        for(int i=0;i<neg;i++)
        {
            a--;
            cout << a << " ";
        }
        cout << "
";
        a=0;
        for(int i=0;i<n;i++)
        {
            a++;
            cout << a << " ";
            if(neg)
            {
                a--;
                cout << a << " ";
                i++;
                neg--;
            }
 
        }
        cout << "
";
 
    }
 
    return 0;
}