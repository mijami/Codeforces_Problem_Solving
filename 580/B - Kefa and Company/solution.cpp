#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
#define pb push_back
#define ll long long int
#define e4  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main()
{
    e4
    int n;
    int d;
    cin >> n >> d;
 
    vector<pair<int, int> > vec;
    for(int i=0; i<n; i++)
    {
        int start,fin;
        cin >> start >> fin;
        vec.push_back( make_pair(start,fin) );
    }
    sort(vec.begin(),vec.end());
    ll ans=vec[0].second;
 
    ll x=0;
    vector<long long int> pref;
    for(int i=0; i<n; i++)
    {
        x+=vec[i].second;
        pref.pb(x);
    }
 
    for(int i=0; i<n; i++)
    {
        int k=vec[i].first + d -1;
        int in=i;
        int l=i,h=n;
        int mid;
        ans=max(ans,(ll)vec[i].second);
        if( k < vec[i+1].first  )
        {
            if(i+1<n) ans=max(ans,(ll)vec[i+1].second);
            continue;
        }
        else
        {
            while(l<=h)
            {
                mid=(l+h)/2;
                if(mid==h)
                {
                    break;
                }
                if(vec[mid].first <= k)
                {
                    in = mid;
                    l=mid+1;
                }
                else if(vec[mid].first > k)
                {
                    h=mid;
                }
            }
            if(i==0)
            {
                ans=max(ans,pref[in]);
            }
            else  ans=max(ans,pref[in]-pref[i-1]);
 
        }
    }
 
    cout << ans << "
";
 
 
 
    checkmate
}