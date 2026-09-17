#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    int n;
 
    string ab;
    while(t--)
    {
        cin >> n;
 
        cin >> ab;
        int a=0;
        for(int i=0; i<n; i++)
        {
            if(ab[i]=='a' && ab[i+1]== 'b')
            {
                cout << i+1 << " " << i+2 << "
";
                a++;
                break;
            }
            else if(ab[i]=='b' && ab[i+1]== 'a')
            {
                a++;
                cout << i+1 << " " << i+2 << "
";
                break;
            }
        }
        if(a<1){
            cout << "-1 -1" << "
";
        }
 
    }
 
 
    return 0;
}