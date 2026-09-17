#include <bits/stdc++.h>
 
using namespace std;
 
#define checkmate return 0;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while (t--){
        int n;
        vector<int > vec;
        cin >> n;
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            sum+=a;
 
        }
        sort(vec.rbegin(), vec.rend());
        if(sum==0)
        {
            cout << 0 << "
";
        }
        else if(2*vec[0] <= sum){
            cout << 1 << "
";
        }
        else {
            cout << (2*vec[0])-sum << "
";
        }
 
    }
 
    checkmate
}