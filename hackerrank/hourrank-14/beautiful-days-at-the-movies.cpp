#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <cmath>
#include <ctime>
#include <bitset>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;

#define forn(i, n) for (int i = 0; i < (int)(n); i++)
#define forv(i, v) forn(i, v.size())
#define all(v) v.begin(), v.end()
#define mp make_pair
#define pb push_back


int main() {
    int a, b, k;
    cin >> a >> b >> k;
    int res = 0;
    for (int x = a; x <= b; x++) {
        int t = x;
        int d = 0;
        while (t) {
            d = d * 10 + t % 10;
            t /= 10;
        }
        if (abs(x - d) % k == 0) res++;
    }
    cout << res;
    return 0;
}