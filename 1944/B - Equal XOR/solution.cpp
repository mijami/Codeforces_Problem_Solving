#include <bits/stdc++.h>
 
using namespace std;
#define Fast_io                       \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
#define cinn(x) \
        for (int i = 0; i < x.size(); i++) cin >> x[i];
#define printa(x) \
        for (int i = 0; i < x.size(); i++) cout << x[i] << " ";
#define LL long long
#define pb push_back
#define ppb pop_back
#define MP make_pair
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define SQR(x) ((x) * (x))
#define loop(i, y) for (int i = 0; i < int(y); i++)
#define FOR(i, x, y) for (int i = int(x); i <= int(y); i++)
#define ROF(i, x, y) for (int i = int(x); i >= int(y); i--)
#define sz(c) int(c.size())
#define clr(x, y) memset(x, y, sizeof(x))
#define si(x) scanf("%d", &x)
#define sii(x, y) scanf("%d %d", &x, &y)
#define siii(x, y, z) scanf("%d %d %d", &x, &y, &z)
#define sl(x) scanf("%lld", &x)
#define sll(x, y) scanf("%lld %lld", &x, &y)
#define slll(x, y, z) scanf("%lld %lld %lld", &x, &y, &z)
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
 
template <typename T>
istream &operator>>(istream &in, vector<T> &a)
{
    for (auto &x : a) in >> x;
    return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a)
{
    for (auto &x : a) out << x << ' ';
    return out;
};
 
#ifdef VAMP
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " = " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define dbg(...)
#endif
 
template <class T, class L>
inline T bigMod(T p, T e, L M)
{
    LL ret = 1 % M;
    for (; e > 0; e >>= 1)
    {
        if (e & 1) ret = (ret * p) % M;
        p = ((LL)p * p) % M;
    }
    return (L)ret;
}
 
/// Constants
#define MAX 200005
#define MOD 1000000007
#define eps 1e-9
#define INF 0x3f3f3f3f3f3f3f3f  // 4,557,430,888,798,830,399
#define inf 0x3f3f3f3f          // 1,061,109,567
#define PI acos(-1.0)           // 3.1415926535897932
#define VT int
 
void solve()
{
 
    int n,k;
    cin >> n >> k;
 
    k=k*2;
    vector<int>vec,vec2;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        vec2.pb(a);
    }
    sort(vec.begin(),vec.end());
    sort(vec2.begin(),vec2.end());
 
    vector<int> ans, ans2;
    int cnt=0;
    int cnt2=0;
    map<int,int>mp;
    for(int i=0;i<n-1;i++)
    {
        if(vec[i]==vec[i+1] && cnt<k)
        {
            ans.pb(vec[i]);
            ans.pb(vec[i]);
            mp[vec[i]]++;
            cnt+=2;
        }
        if(vec2[i]==vec2[i+1] && cnt2<k)
        {
            ans2.pb(vec2[i]);
            ans2.pb(vec2[i]);
            cnt2+=2;
            mp[vec2[i]]++;
        }
 
    }
    if(cnt<k)
    {
        while(cnt<k)
        {
            for(int i=1;i<=n;i++)
            {
                if(mp[i]==0)
                {
 
                    ans.pb(i);
                    ans2.pb(i);
                    cnt++;
                }
 
                if(cnt==k)
                {
                    break;
                }
            }
            if(cnt==k) break;
        }
    }
    for(int i=0;i<k;i++)
    {
        cout << ans[i] << " ";
    }
    cout << "
";
    for(int i=0;i<k;i++)
    {
        cout << ans2[i] << " ";
    }
    cout << "
";
 
 
 
 
 
 
 
}
 
int main()
{
    int t = 1;
 
    Fast_io;
 
    cin >> t;
    int c = 1;
    while (t--)
    {
        //cout << "Case " << c++ << ": ";
        solve();
    }
    return 0;
}