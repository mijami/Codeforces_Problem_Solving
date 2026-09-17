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
    while(t--)
    {
        int a;
        cin >> a;
        vector<int>vec;
        cout << a << "
";
        for(int i=1;i<=a;i++)
        {
            vec.pb(i);
            cout << i << " ";
        }
        cout << "
";
        swap(vec[0],vec[a-1]);
        for(int i=0;i<a;i++)
        {
            cout << vec[i] << " ";
        }
        cout << "
";
        int j=vec.size()-1;
        for(int i=0;i<a-2;i++)
        {
            swap(vec[j],vec[j-1]);
            j--;
            for(int k=0;k<a;k++)
            {
                cout << vec[k] << " ";
            }
            cout << "
";
        }
 
 
    }
 
    checkmate
}