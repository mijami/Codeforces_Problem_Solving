#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
 
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        string a,b;
        cin >> a;
 
        cin >> b;
        int coun[10050];
        int count2=0;
        for(int I=0; I<b.length(); I++)
        {
            for(int l=0; l<a.length(); l++)
            {
                if(b[I]==a[l] )
                {
                    coun[I]=l+1;
                }
                if(b[I]==a[l] && I>0)
                {
                    count2+=abs(coun[I]-coun[I-1]);
                }
            }
 
        }
        cout << count2 << "
";
    }
    return 0;
}