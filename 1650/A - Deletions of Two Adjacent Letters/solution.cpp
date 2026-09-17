#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        char b;
        cin >> a;
        cin >> b;
        int flag=0;
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==b && i>1 && i%2==0)
            {
                flag++;
            }
            else if(a[0]==b)
            {
                flag++;
            }
        }
        if(flag>0){
            cout << "YES" << "
";
        }
        else
            cout << "NO" << "
";
    }
 
    checkmate
}