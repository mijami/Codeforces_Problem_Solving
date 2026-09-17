#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        int n;
        cin >> n;
        int l=n;
 
        vector< int > v;
        for(int i=0; i<n; i++) v.push_back( i+1 );
        while(l--)
        {
 
            next_permutation(v.begin(), v.end());
            for(int i=2; i<n; i++){
                    if(v[i]==v[i-1]+v[i-2]){
                        swap(v[i], v[i-1]);
                    }
            }
            for(int i=0; i<n; i++)
            {
                cout << v[i] << " ";
            }
            cout << "
";
            if(l==n)
            {
                break;
            }
        }
    }
    return 0;
}
 