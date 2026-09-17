#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, f;
    long long sales=0;
    
    cin >> n >> f;
    
    vector <int> vec(n);
    
    for(int i=0; i<n; i++)
    {
        long long int k,l;
        cin >> k >> l;
        int mnsell= min(k,l);
        int mxsell = min(2*k,l);
 
        sales += mnsell;
        vec[i] = mxsell-mnsell;
    }
    
    sort(vec.begin(), vec.end());
    reverse (vec.begin(), vec.end());
    
    for(int i=0; i<f; i++)
    {
        sales += vec[i];
 
    }
    
    cout << sales << "
";
 
    return 0;
}