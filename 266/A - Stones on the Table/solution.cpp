#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string first, present;
    int n;
    cin>> n;
    cin >> first;
    int c=0;
    present =first;
    for(int i=0; i<n-1; i++)
    {
 
        if(first[i] == present[i+1])
        {
            c++;
        }
        first[i+1]= present[i+1];
    }
    cout << c << "
";
 
    return 0;
}
 