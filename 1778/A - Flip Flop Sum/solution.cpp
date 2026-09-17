#include <bits/stdc++.h>
 
using namespace std;
#define ll long long int
#define pb push_back
 
 
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
        int flag=0;
        ll s=0;
        int neg=0;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
            if(a==-1 && vec[i-1]==-1 && i>0)
            {
                flag++;
            }
            if(a==-1)
            {
                neg++;
            }
            s+=a;
        }
        if(flag)
        {
            s+=4;
        }
        else if(neg==0)
        {
            s+=-4;
        }
        cout << s << "
";
 
    }
    return 0;
}