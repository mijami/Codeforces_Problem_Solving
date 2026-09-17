#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int o=0,e=0,O=0,E=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a%2==0) e++;
        else o++;
    }
    for(int i=0;i<m;i++)
    {
        int a;
        cin >> a;
        if(a%2==0) E++;
        else O++;
    }
    int x=min(e,O);
    x+=min(E,o);
    cout << x << "
";
    return 0;
}