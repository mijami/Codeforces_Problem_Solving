#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int i=0;
        int j=n-1;
        int k=0;
        while(i<j)
        {
 
            if(a[i]==a[j])
            {
                i++;
                j--;
            }
            else if(a[i]!=a[j] && i==0)
            {
                i++;j--;
                k++;
            }
            else if(a[i]!=a[j] && a[i-1]==a[j+1])
            {
                i++;j--;
                k++;
            }
            else if(a[i]!=a[j] && a[i-1]!=a[j+1])
            {
                i++;j--;
            }
        }
        if(k>=2)
        {
            cout << "NO
";
        }
        else cout << "YES
";
    }
 
 
 
    return 0;
}