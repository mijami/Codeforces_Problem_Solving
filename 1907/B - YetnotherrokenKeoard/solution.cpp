#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#define newline cout << "
";
 
using namespace std;
 
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
        cin >> a;
        int n=a.size();
        stack<int>stu,stl;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='b' && !stl.empty())
            {
                stl.pop();
            }
            else if(a[i]=='B' && !stu.empty())
            {
                stu.pop();
            }
            else if(a[i]>='A' && a[i]<='Z' && a[i]!='B')
            {
                stu.push(i);
            }
            else if(a[i]>='a' && a[i]<='z' && a[i]!='b')
            {
                stl.push(i);
            }
        }
 
        vector<int>vec;
        if(!stl.empty() || !stu.empty())
        {
 
            while (!stu.empty())
            {
                vec.pb( stu.top() );
                stu.pop();
            }
            while (!stl.empty())
            {
                vec.pb( stl.top() );
                stl.pop();
            }
            sort(vec.begin(),vec.end());
            for(int i=0; i<vec.size(); i++)
            {
                cout << a[vec[i]] ;
            }
 
        }
        cout << "
";
 
    }
 
 
 
    return 0;
}