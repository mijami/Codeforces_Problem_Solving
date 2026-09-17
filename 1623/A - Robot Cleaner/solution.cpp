#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n, m, a,b, c, d;
    int t;
    cin >> t;
    int x;
    while(t--){
        x= 1e9;
        cin >> n >> m >> a >> b>> c >> d;
 
        if (a > c){
			x = n - a + n - c;
		}
		else{
			x = c - a;
		}
 
		if (b > d){
			x = min(x , 2 * m - b - d);
		}
		else{
			x = min(x , d - b);
		}
		cout << x <<'
';
    }
    return 0;
}
 