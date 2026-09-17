#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int x=1;
        for(int i=0;i<a.size();i++)
        {
            if(x < a[i]-'a'+1){
                x=a[i]-'a'+1;
            }
        }
        cout << x << "
";
 
    }
 
 
    return 0;
}