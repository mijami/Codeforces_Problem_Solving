#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k=2;
        int j=0;
        for(int i=0;i<n;i++)
        {
            cout << k+j << " ";
 
            j=(i)+i+1;
 
        }
        cout << "
";
    }
 
    return 0;
}
 
 