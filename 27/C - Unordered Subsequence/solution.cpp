#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
 
    int n;
    cin >> n;
    vector<int>vec,v,ch,ch2;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    ch=vec;
    ch2=vec;
    sort(ch.begin(),ch.end());
    sort(ch2.rbegin(),ch2.rend());
    if(ch==vec || ch2==vec)
    {
        cout << "0
";
        return 0;
    }
 
    for(int i=0; i<n; i++)
    {
        if(vec[i]==vec[i+1] && i+1<n)
        {
            i++;
        }
        else if(vec[i]<vec[i+1] && i+1<n)
        {
            v.pb(i+1);
            int j=vec[i];
            while(vec[i]<=vec[i+1] && i+1<n)
            {
                i++;
            }
            if(j==vec[i]) i++;
            v.pb(i+1);
            j=vec[i];
            while(vec[i]>=vec[i+1] && i+1<n)
            {
                i++;
            }
            if(j==vec[i]) i++;
            v.pb(i+1);
            //2 3 3 4 4 4 1
        }
        else if(vec[i]>vec[i+1] && i+1<n)
        {
            v.pb(i+1);
            int j=vec[i];
            while(vec[i]>=vec[i+1] && i+1<n)
            {
                i++;
            }
            if(j==vec[i]) i++;
            v.pb(i+1);
            j=vec[i];
            while(vec[i]<=vec[i+1] && i+1<n)
            {
                i++;
            }
            if(j==vec[i]) i++;
            v.pb(i+1);
        }
    }
    cout << 3 << "
";
    map<int,int>mp;
    for(int i=0; i<3; i++)
    {
 
        if(vec[v[1]-1]==vec[v[0]-1]  )
        {
            cout << "FOUND";
        }
        cout << v[i] << " ";
    }
    cout << "
";
 
 
    return 0;
}
 
 