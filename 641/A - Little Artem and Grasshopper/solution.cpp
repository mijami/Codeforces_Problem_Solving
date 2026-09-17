#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
 
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>vec;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    map<int,int>mp;
    int i=0;
    int flag=0;
    for(;;)
    {
        if(s[i]=='>')
        {
            mp[i]++;
            i+=vec[i];
            if(i>=n || i<0)
            {
                flag++;
                break;
            }
            else if(mp[i]>1)
            {
                flag=0;
                break;
            }
        }
        else if(s[i]=='<')
        {
            mp[i]++;
            i-=vec[i];
            if(i>=n || i<0)
            {
                flag++;
                break;
            }
            else if(mp[i]>1)
            {
                flag=0;
                break;
            }
        }
 
 
 
    }
    if(flag)
    {
        cout << "FINITE
";
    }
    else cout << "INFINITE
";
 
    return 0;
}