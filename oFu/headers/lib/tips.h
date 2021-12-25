/*
    便利なマクロ&関数
*/

#include <iostream>
#include <vector>
#include <functional>
#include <math.h>


#ifndef INCLUDED_TIPS_H
#define INCLUDED_TIPS_H

using namespace std;
using ll = int64_t;
using ull = unsigned long long;
using ld = long double;

#define rep(i, n) for (ll i = 0; i < static_cast<ll>(n); ++i)
#define rep_rev(i, n) for (ll i = n - 1; i >= 0; --i)
#define rep2(i, a, b) for (ll i = a; i < static_cast<ll>(b); ++i)
#define rep_rev2(i, a, b) for (ll i = b - 1; i >= a; --i)
#define all(v) (v).begin(), (v).end()
#define bit(n,k) (((n)>>(k))&1)
#define isin(x, l, r) (l <= (x) && (x) < r)
#define dx4 {-1, 0, 1, 0}
#define dy4 {0, 1, 0, -1}
#define dx8 {-1, -1, 0, 1, 1, 1, 0, -1}
#define dy8 {0, 1, 1, 1, 0, -1, -1, -1}
#define length(a) static_cast<ll>(a.size())
#define get(x, i) get<i>(x)
#define sign(x) ((x == 0) ? 0 : (x) / abs(x))
#define ndigits(x) static_cast<ll>(floor(log10(x)) + 1)
#define deg2rad(x) ((x) * M_PI / 180)
#define rad2deg(x) ((x) * 180 / M_PI)
#define log(x, y) (log(y) / log(x))

#endif
