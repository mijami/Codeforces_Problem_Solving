#include <bits/stdc++.h>
using namespace std;
#define checkmate return 0;
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
        vector<int> vec,vec2;
        cin >> n;
        int flag=0,fl=0;
 
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
            if(a==1)
            {
                flag++;
            }
            if(a==0)
            {
                fl++;
            }
        }
 
        if(flag && fl){
            cout << "NO" << "
";
        }
        else if(flag ==0){
            cout << "YES" << "
";
        }
 
        else {
            sort(vec.begin(),vec.end());
            for(int i=1;i<n;i++)
            {
                if(vec[i]-vec[i-1]==1)
                {
                    flag++;
                    fl++;
                    break;
                }
            }
            if(flag && fl)
            {
                cout << "NO" << "
";
            }
            else{
                cout << "YES" << "
";
            }
 
        }
 
 
    }
 
    checkmate
}
 