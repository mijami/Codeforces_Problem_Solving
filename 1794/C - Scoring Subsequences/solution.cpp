#include <bits/stdc++.h>
 
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
        int n;
        cin >> n;
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            q.push(a);
            if(q.front()<q.size())
            {
                q.pop();
            }
            cout << q.size() << " ";
        }
        cout << "
";
    }
 
    return 0;
}