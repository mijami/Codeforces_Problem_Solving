#include <bits/stdc++.h>
 
using namespace std;
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n;
    cin >> n;
    long long int t,a;
 
    while(n--){
        cin >> t;
        vector < long long int > vec;
        for(auto i = 0; i < t; i++){
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(), vec.end());
 
        cout << vec[t-1]-vec[0] << "
";
 
    }
 
 
 
 
    return 0;
}