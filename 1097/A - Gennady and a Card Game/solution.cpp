#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
 
    cin >> a;
 
    int c=0;
    for(int i=0; i<5; i++)
    {
        string b;
        cin >> b;
        if(a[0]==b[0] || a[1]==b[1])
        {
            c++;
        }
    }
    if(c>0){
        cout << "YES" << "
";
    }
    else{
        cout << "NO" << "
";
    }
 
    return 0;
 
}