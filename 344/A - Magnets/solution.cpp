#include <bits/stdc++.h>
using namespace std;
//last code was for finding the maximum number of the largest group I guess :P 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string first, present;
    int n;
    cin>> n;
    cin >> first;
    int c=1;
 
    for(int i=0; i<n-1; i++)
    {
        cin >> present;
        if(first != present)
        {
            c++;
        }
        first= present;
    }
    cout << c << "
";
 
    return 0;
}