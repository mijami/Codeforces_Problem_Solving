#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
 
int main(){
 
    int n,k;
    cin>>n>>k;
    vector<int>vec;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int arr[n][n];
    int cnt=0;
    for(int i=0;i<n/k;i++)
    {
        for(int j=0;j<k;j++)
        {
            arr[i][j]=vec[cnt];
            cnt++;
        }
    }
 
    int ans=0;
    for(int i=0;i<k;i++)
    {
        cnt=0;
        int t=0;
        for(int j=0;j<n/k;j++)
        {
            if(arr[j][i]==1)
            {
                cnt++;
            }
            else t++;
 
        }
        ans+=min(t,cnt);
    }
    cout << ans << "
";
}