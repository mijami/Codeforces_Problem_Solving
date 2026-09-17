#include <bits/Stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    pair <int,int> matches[25];
 
    int capacity, m;
    cin >> capacity >> m;
    int total=0;
 
    for(int i=0; i<m; i++)
    {
        cin >> matches[i].second >> matches[i].first;
 
    }
 
    sort(matches, matches+m);
 
    for(int i=m; i>=0; i--){
        while(capacity !=0 && matches[i].second != 0){
            capacity-=1;
            matches[i].second -= 1;
            total += matches[i].first;
        }
        if(capacity == 0)
        {
            break;
        }
    }
 
    cout << total << "
";
 
    return 0;
}