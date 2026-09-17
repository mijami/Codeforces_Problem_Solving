#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, t;
    cin >> t;
 
    set<long long int>s;
    for(long long int i=1; i<1000000000; i++)
    {
        if(i*i<=1000000000)
        {
            s.insert(i*i);
        }
        else break;
 
        if(i*i*i<=1000000000)
        {
            s.insert(i*i*i);
        }
    }
    
    while(t--)
    {
        cin >> n;
        int c=0;
        set<long long int >::iterator i;
        for(i=s.begin(); i!=s.end(); i++){
            if(*i>n) break;
            c++;
        }
        cout << c << "
";
    }
 
    return 0;
}