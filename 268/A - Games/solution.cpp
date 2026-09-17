#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int a;
    int b,c;
    cin >> a;
    pair <int,int> color[35];
    for(int i=0; i<a; i++)
    {
        cin >> color[i].first >> color[i].second;
    }
 
    int coun=0;
    for(int i=0; i<a;i++){
        for(int I=0; I<a; I++)
        {
            if(color[i].first==color[I].second)
            {
                coun++;
            }
        }
    }
    cout << coun << "
";
 
    return 0;
}