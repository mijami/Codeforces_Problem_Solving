#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
 
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
        vector<int>vec,vec2,arr,arr2;
 
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        for(int i=0; i<n; i++)
        {
            int a;
            cin >> a;
            vec2.pb(a);
        }
        arr=vec;
        arr2=vec2;
        sort(arr.begin(),arr.end());
 
        sort(arr2.begin(),arr2.end());
 
        for(int i=0;i<n-1;i++)
        {
            if(vec2[i]>vec2[n-1] && vec2[i]<=vec[n-1])
            {
                swap(vec[i],vec2[i]);
            }
            else if(vec[i]>vec[n-1] && vec[i]<=vec2[n-1])
            {
                swap(vec[i],vec2[i]);
            }
        }
        int m1=vec[n-1];
        int m2=vec2[n-1];
        sort(vec.begin(),vec.end());
 
        sort(vec2.begin(),vec2.end());
        if(vec[n-1]==m1 && vec2[n-1]== m2)
        {
            cout << "YES
";
        }
        else cout << "NO
";
 
 
 
    }
    return 0;
 
}