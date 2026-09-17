#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main()
{
 
    int n,a,b;
    cin >> n >> a >> b;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    int i=0;
    int j=n-1;
    ll cost=0;
    int flag=0;
    while(i<=j)
    {
        if((vec[i]==0 && vec[j]==2) || (vec[i]==2 && vec[j]==0))
        {
            cost+=a;
            i++;
            j--;
        }
        else if( (vec[i]==1 && vec[j]==2) || (vec[i]==2 && vec[j]==1))
        {
            cost+=b;
            i++;
            j--;
        }
        else if((vec[i]==1 && vec[j]==0) || ( vec[i]==0 && vec[j]==1)){
            flag++;
            break;
        }
        else if(vec[i]==vec[j] && vec[i]==2)
        {
 
            cost+=min(a,b);
            if(i!=j) cost+=min(a,b);
            i++;
            j--;
        }
        else if(vec[i]==vec[j])
        {
            i++;
            j--;
        }
 
 
 
 
    }
    if(flag)
    {
        cout << "-1
";
    }
    else
    {
        cout << cost << "
";
    }
 
    return 0;
}