#include <bits/stdc++.h>
 
using namespace std;
#define checkmate return 0;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n,m;
    char c;
    cin >> n >> m >> c;
 
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    set<char> st;
    st.insert(c);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==c){
                if(i+1!=n && arr[i+1][j]!='.')
                {
                    st.insert(arr[i+1][j]);
                }
                if(j+1!=m && arr[i][j+1]!='.')
                {
                    st.insert(arr[i][j+1]);
                }
 
                if(i!=0 && arr[i-1][j]!='.')
                {
                    st.insert(arr[i-1][j]);
                }
 
                if(j!=0 && arr[i][j-1]!='.')
                {
                    st.insert(arr[i][j-1]);
                }
            }
        }
 
    }
    int a=st.size();
    cout << a-1 << "
";
 
 
 
    checkmate
}