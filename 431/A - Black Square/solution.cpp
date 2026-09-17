#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a[4];
    for (int i = 0; i< 4; i++)
    {
        cin >> a[i];
    }
    string A;
    cin >> A;
    int n = A.size();
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum +=  a[A[i]-'1'];
 
    }
    cout << sum << "
";
 
 
    return 0;
}