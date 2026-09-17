#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main(){
 
    int n;
    cin >> n;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    map<int,int>mp;
    mp[vec[0]]++;
    long long int cnt=0;
    for(int i=1;i<n;i++)
    {
 
 
        if(mp[vec[i]]==1)
        {
            while(mp[vec[i]]==1)
            {
                vec[i]++;
                cnt++;
            }
            mp[vec[i]]++;
            
        }
        else mp[vec[i]]++;
    }
    cout << cnt << "
";
    return 0;
}