/*
* @Author: abhk943 
* @Date: 2021-05-22 20:20:49 
* @Last Modified by: abhk943
* @Last Modified time: 2021-05-22 20:22:52
*/
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include "bits/stdc++.h"
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
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

using namespace std;

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

int main()
{
    fast_cin();
    int n, k;
    cin >> n >> k;
    set<int> arr;
    for (int i = 1; i <= n; i += 1)
    {
        arr.insert(i);
    }
    int in = k % n;
    if (in == 0)
        in = n;
    while (!arr.empty())
    {
        int r = arr.find(in);
        arr.erase(r);
        int sz = arr.size();
        if (sz != 0)
        {
            in = (in + k) % sz;
            if (in == 0)
                in = sz;
        }
    }

    // int i = k + 1;
    // int sz = arr.size();
    // // int count = 0;
    // while (!arr.empty())
    // {
    //     // count++;
    //     for (; i <= arr.size(); i += k)
    //     {
    //         cout << arr[i - 1] << " ";
    //         arr.erase(arr.begin() + i - 1);
    //         // break;
    //     }
    //     if (!arr.empty())
    //     {
    //         sz = arr.size();
    //         // cout << sz;
    //         i %= sz;
    //         if (i == 0)
    //             i = sz;
    //         // cout << " " << i << "\n";
    //     } // if (arr.size() == 3)
    //     // if (count == 4)
    //     //     break;
    //     // break;
    // }

    // if (n & 1)
    //     rm = 1, arr.pb(n);
    // else
    //     rm = 2;
    // // for (auto it : arr)
    // //     cout << it;
    // // cout << ln;
    // while (!arr.empty())
    // {
    //     int sz = arr.size();
    //     rm %= sz;
    //     if (rm == 0)
    //         rm = sz;

    //     cout << arr[rm - 1] << " ";
    //     arr.erase(arr.begin() + rm - 1);
    //     // outStr("{} ".format(arr.pop(rm - 1)))
    //     rm += 1;
    // }
    return 0;
}