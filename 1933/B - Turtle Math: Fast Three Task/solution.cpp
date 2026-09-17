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
        int n;
        cin >> n ;
 
        int sum=0;
 
        int flag=0;
        vector<int>vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            sum+= a;
            vec.pb(a);
            if(a==1)
            {
                flag++;
            }
        }
        if(sum%3==0)
        {
            cout << 0 << "
";
        }
        else if(sum%3==2)
        {
            cout << 1 << "
";
        }
        else if(n==1 && (sum%3)!=0)
        {
            cout << 1 << "
";
        }
        else
        {
            int k=0;
            for(int i=0; i<n; i++)
            {
                if( (sum-vec[i]) %3 ==0)
                {
                    cout << "1
";
                    k++;
                    break;
                }
            }
            if(k==0)
            {
                cout << 2 << "
";
            }
        }
 
    }
 
 
    return 0;
}