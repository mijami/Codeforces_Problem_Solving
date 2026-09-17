#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
#define pb push_back
 
 
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
        string a;
        cin >> a;
        string x="";
        for(int i=1;i<=200;i++){
            if(i%3==0) x+='F';
            if(i%5==0) x+='B';
        }
        int flag=0;
        int j=0;
        for(int i=0; i<x.size(); i++)
        {
            string c= x.substr(i,n);
            if(c==a) flag++;
        }
 
        if(flag) cout << "YES
";
        else cout << "NO
";
 
    }
    //3 5 6 9 10 12 15 18 20 21 24 25 27 30 33 35 36 39 40 42 45 48 50 51 54 55 57 60
    //F B F F B  F F B F  B  F   F B  F F B F  B  F   F B F FB  F B F F B F F B
    return 0;
}