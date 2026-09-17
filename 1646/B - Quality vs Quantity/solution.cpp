#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        vector<long long int> vec;
        int n;
        cin >> n;
        for(int i=0; i<n;i++)
        {
            long long int a;
 
            cin >> a;
            vec.push_back(a);
 
        }
        sort(vec.begin(),vec.end());
        long long b= vec[0]+vec[1];
        long long c = vec[n-1];
        int i=1;
        while(b >= c && i<n-1){
            n--;
            i++;
            c+=vec[n-1];
            b+=vec[i];
        }
        //1 2 2 3 3
        if(b < c)
        {
            cout << "YES" << "
";
        }
        else {
            cout << "NO" << "
";
        }
 
    }
 
 
    checkmate
}
 
 