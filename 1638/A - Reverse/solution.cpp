#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t ;
    int n;
    int a;
 
    while(t--)
    {
        cin >> n;
        vector<int>vec;
        vector<int>vec2;
 
        for(int i=0; i<n; i++)
        {
            cin >> a;
            vec.push_back(a);
 
        }
        int j=-1,k=-1,l=-1;
        for(int i=0; i<n; i++)
        {
            if(vec[i]!=i+1)
            {
 
                l=i+1;
                k=i;
                vec2.push_back(vec[i]);
                i++;
                while(i<n)
                {
                    vec2.push_back(vec[i]);
                    if(vec[i]==l)
                    {
                        j=i;
                        break;
                    }
                    i++;
                }
                break;
            }
        }
        if(k==-1)
        {
            for(int i=0; i<n; i++)
            {
                cout << vec[i] << " ";
            }
            cout << "
";
        }
        else{
        reverse(vec2.begin(),vec2.end());
        for(int i=0; i<k; i++)
        {
            cout << vec[i] << " ";
        }
        for(int i=0; i<vec2.size(); i++)
        {
            cout << vec2[i] << " ";
        }
        for(int i=j+1; i<n; i++)
        {
            cout << vec[i] << " ";
        }
 
        cout << "
";
        }
 
    }
 
 
    return 0;
}