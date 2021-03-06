// <!--encoding UTF-8 UTF-8编码--!>
/*****************************************************************************
*                      ----Stay Hungry Stay Foolish----                      *
*    @author    :   Shen                                                     *
*    @name      :   LightOJ 1307                                             *
*****************************************************************************/
#include <bits/stdc++.h>
using namespace std;
typedef long long int64;
template<class T>inline bool updateMin(T& a, T b){ return a > b ? a = b, 1: 0; }
template<class T>inline bool updateMax(T& a, T b){ return a < b ? a = b, 1: 0; }
inline int    nextInt() { int x; scanf("%d", &x); return x; }
inline int64  nextI64() { int64  d; cin >> d; return d; }
inline char   nextChr() { scanf(" "); return getchar(); }
inline string nextStr() { string s; cin >> s; return s; }
inline double nextDbf() { double x; scanf("%lf", &x); return x; }
inline int64  nextlld() { int64 d; scanf("%lld", &d); return d; }
inline int64  next64d() { int64 d; scanf("%I64d",&d); return d; }

const int MaxN = 2048;
int t, tt;
int n, a[MaxN], l, r;
int64 ans;

void solve()
{
    n = nextInt(); ans = 0;
    for (int i = 0; i < n; ++i) a[i] = nextInt();
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
    {
        l = 0;
        for (r = i - 1; r >= 0; --r)
        {
            while (l < r && a[l] + a[r] <= a[i]) ++l;
            if (l >= r) break;
            ans += r - l;
        }
    }
    printf("Case %d: %lld\n", ++tt, ans);
}

int main()
{
    t = nextInt(); while (t--) solve();
    return 0;
}
