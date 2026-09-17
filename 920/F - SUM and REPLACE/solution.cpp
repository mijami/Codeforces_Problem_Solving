#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define ull unsigned long long int
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define mx1 300005
#define newline cout << "
";
 
using namespace std;
int arr[mx1];
ll tree[mx1 * 4];
int mx[mx1*4];
 
int d[1000006];
 
void countDivisors()
{
    for(int i=1; i<=1000000; i++)
    {
        for(int j=i; j<=1000000; j+=i)
        {
            d[j]++;
        }
    }
}
 
 
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        mx[node] = arr[b];
        return;
    }
    else
    {
        int mid = (b + e)/2;
        init((node*2), b, mid);
        init((node*2)+1, mid + 1, e);
        tree[node] = tree[(node*2)] + tree[(node*2) + 1];
        mx[node] = max(mx[(node*2)], mx[(node*2) + 1]);
 
    }
}
 
 
void update(int node, int b, int e, int l, int r)
{
    if (l > e || r < b) return;
    if(mx[node]<=2) return;
    if (b ==e )
    {
        mx[node]= d[tree[node]];
        tree[node] = d[tree[node]];
        return;
    }
 
    int mid = (b + e)/2;
    update((node*2) , b, mid, l, r);
    update((node*2)+ 1, mid + 1, e, l, r);
    tree[node] = tree[(node*2)] + tree[(node*2) + 1];
    mx[node] = max(mx[(node*2)],mx[(node*2) + 1]);
}
 
 
ll query(int node, int b, int e, int l, int r)
{
    if (l > e || r < b) return 0;
    if (b >= l && e <= r)
    {
        return tree[node];
    }
 
    int mid = (b + e)/2;
    ll p1 = query( (node*2), b, mid, l,r);
    ll p2 = query((node*2)+1, mid + 1, e, l,r);
    return p1 + p2;
}
 
 
 
 
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
 
    countDivisors();
 
 
    int n,q;
    cin >> n >> q;
 
    for(int i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    init(1, 1, n);
 
    while(q--)
    {
        int a;
        cin >> a;
        int l,r;
        cin >> l >> r;
 
        if(a==1)
        {
            update(1, 1, n, l,r);
        }
        if(a==2)
        {
 
            cout << query(1, 1, n, l,r);
            newline
 
        }
 
 
    }
    return 0;
}