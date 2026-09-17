#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >>t;
    int n=t;
    vector<int> vec,vec2,vec3;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        vec.push_back(a);
        vec2.push_back(b);
        vec3.push_back(c);
    }
    int x=0,y=0,z=0;
    for(int i=0; i<n; i++)
    {
        x+=vec[i];
        y+=vec2[i];
        z+=vec3[i];
    }
    if(x==0 && y==0 && z==0)
    {
        cout << "YES" << "
";
    }
    else
    {
        cout << "NO" << "
";
    }
 
 
    checkmate
}