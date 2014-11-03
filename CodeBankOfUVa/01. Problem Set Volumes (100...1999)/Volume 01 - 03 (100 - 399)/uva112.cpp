// <!-- encoding UTF-8 --!>
/*****************************************************************************
*                      ----Stay Hungry Stay Foolish----                      *
*    @author    :   Shen                                                     *
*    @name      :   uva 112                                                  *
*****************************************************************************/
// 人一我百，人十我万！追逐青春的梦想，怀着自信的心，永不放弃！
//#pragma GCC optimize ("O2")
//#pragma comment(linker, "/STACK:1024000000,1024000000")

//#include <bits/stdc++.h>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
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

const bool WIN  = true;
const bool LOSE = false;
const char aye[] = "yes";
const char nay[] = "no";
const char ace[] = "Alice";
const char bob[] = "Bob";

bool flag = 0;

bool judge(int n, int sum)
{
    int v; char ch = nextChr();
    if (!((cin >> v) == 0))
    {
        n += v;
        bool temp = judge(n, sum) | judge(n, sum);
        if (!flag && !temp) flag = (n == sum);
        cin >> ch;
        return 1;
    }
    else
    {
        cin.clear();
        cin >> ch;
        return 0;
    }
}

int main()
{
    int sum;
    while (cin >> sum)
    {
        judge(0, sum);
        puts(flag? aye: nay);
        flag = 0;
    }
    return 0;
}
