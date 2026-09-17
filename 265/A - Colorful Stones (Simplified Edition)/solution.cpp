#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string S, t;
 
    cin >> S;
    cin >> t;
 
    int len = max(S.size(), t.size());
    int moves=1;
    int I=0;
    for(int i=0; i<len; i++)
    {
 
        if(t[i]==S[I]){
            moves ++;
            I++;
        }
    }
    cout << moves << "
";
    return 0;
}