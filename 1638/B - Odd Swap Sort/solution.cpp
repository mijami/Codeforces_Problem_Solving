#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
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
        vector <long long int> vodd, vodd2, veven, veven2;
        for(int i=0; i<n; i++)
        {
            long long int a;
            cin >> a;
            if(a%2==0)
            {
                veven.push_back(a);
                veven2.push_back(a);
 
            }
            else
            {
                vodd.push_back(a);
                vodd2.push_back(a);
            }
        }
        sort(vodd.begin(), vodd.end());
        sort(veven.begin(), veven.end());
 
 
        if(vodd==vodd2 && veven == veven2)
        {
            cout << "YES" << "
";
        }
        else
        {
            cout << "NO" << "
";
        }
    }
 
    checkmate
}
 