#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    e4
 
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size();
 
        int stk=0;
 
        for(int i=0;i<n;i++)
        {
            if(stk && s[i]=='B') stk--;
            else
                stk++;
        }
        cout << stk << "
";
 
    }
 
    checkmate
}