#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
int main(){
 
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>vec,left,right;
 
        for(int i=0;i<n;i++)
        {
            int a;
            cin >> a;
            vec.pb(a);
        }
        int i=0;
        int j=n-1;
        int k=0;
        while(i<=j)
        {
            if(vec[i]<=vec[j] && vec[j]==n)
            {
                left.push_back(vec[i]);
                i++;
            }
            else if(vec[i]>vec[j] && vec[i]==n)
            {
                right.push_back(vec[j]);
                j--;
            }
            else{
 
                k=1;
                break;
            }
        }
        if(k)
        {
            cout << "-1
";
        }
        else
        {
            int si=left.size()-1;
            for(int i=si;i>=0;i--)
            {
                cout << left[i] << " ";
            }
            for(int i=0;i<right.size();i++)
            {
                cout << right[i] << " ";
            }
            cout << "
";
        }
 
    }
    return 0;
}