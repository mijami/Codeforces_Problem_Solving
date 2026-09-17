#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sereja=0,dima=0;
    int i=0;
    int N=n-1;
    int c=0;
    while(i<=N)
    {
 
        if(c%2==0)
        {
            if(a[i] > a[N])
            {
                sereja += a[i++];
            }
            else
            {
                sereja += a[N--];
            }
        }
        else{
            if(a[i] > a[N])
            {
                dima += a[i++];
            }
            else
            {
                dima += a[N--];
            }
        }
        c++;
    }
    cout << sereja << " " << dima << "
";
    return 0;
}