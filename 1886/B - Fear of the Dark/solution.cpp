#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx 300001
#define newline cout << "
";
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while(t--)
    {
 
        double x,y,ax,ay,bx,by;
        cin >> x >> y >> ax >> ay >> bx >> by;
 
 
        double dista=sqrt( ((ax-x)*(ax-x)) + ((ay-y)*(ay-y)) );
        double distb=sqrt( ((bx-x)*(bx-x)) + ((by-y)*(by-y)) );
 
        double distr=sqrt( ((bx-ax)*(bx-ax)) + ((by-ay)*(by-ay)) );
        distr=distr/2;
 
        double b=sqrt( ((bx-0)*(bx-0)) + ((by-0)*(by-0)) );
        double a=sqrt( ((ax-0)*(ax-0)) + ((ay-0)*(ay-0)) );
 
        double p=sqrt( ((x-0)*(x-0)) + ((y-0)*(y-0)) );
        //cout << dista << " " << a << "
";
 
        double ans= min({max(dista,a),max(distb,b),max({a,distb,distr}),max({b,dista,distr})});
 
 
        cout << fixed << setprecision(10) <<  ans << "
";
 
 
 
 
 
 
 
 
 
 
    }
 
 
    return 0;
}