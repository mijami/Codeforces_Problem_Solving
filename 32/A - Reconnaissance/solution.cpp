#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    long long int n,d;
    cin >> n >> d;
    vector <long long int> vec;
    for(long long int i=0; i<n; i++)
    {
        long long int a;
        cin >> a;
        vec.push_back(a);
    }
    long long int c=0;
    sort(vec.begin(),vec.end());
    for(long long int i=0; i<n-1; i++)
    {
        for(long long int l=i+1; l<n; l++)
        {
            if(vec[l]-vec[i] <= d)
            {
                c+=2;
            }
            else{
                break;
            }
        }
    }
    cout << c << "
";
 
    checkmate
}