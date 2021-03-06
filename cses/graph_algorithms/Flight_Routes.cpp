#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include "bits/stdc++.h"
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define tr(container, it) for (typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container), element) != container.end())
#define all(c) c.begin(), c.end()
#define sz(c) c.size()
#define forn(i, e) for (ll i = 0; i < e; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
int n, m, k;
vector<vector<ll>> out;
vector<vp64> g;
int main()
{
    fast_cin();
    cin >> n >> m >> k;
    out.resize(n + 1, vector<ll>(k, INF));
    g.resize(n + 1);
    forn(i, m)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        g[a].push_back({b, c});
    }
    priority_queue<pair<ll, ll>, vp64, greater<p64>> pq;
    pq.push({0, 1});
    while (!pq.empty())
    {
        ll u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();
        if (out[u][k - 1] < d)
            continue;
        for (auto it : g[u])
        {
            ll v = it.first;
            ll c = it.second;
            if (out[v][k - 1] > c + d)
            {
                out[v][k - 1] = c + d;
                pq.push({out[v][k - 1], v});
                sort(all(out[v]));
            }
        }
    }
    forn(i, k)
            cout
        << out[n][i] << " ";
    // forn(i, n)
    // {
    //     forn(j, k)
    //             cout
    //         << out[i + 1][j];
    //     cout << ln;
    // }
    // forn(i, n)
    // {
    //     cout << i + 1 << ln;
    //     for (auto it : g[i + 1])
    //         cout << "   " << it.first << it.second << ln;
    // }
    return 0;
}