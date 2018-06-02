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
    int n, m;
    vi a, b;
    cin >> n >> m;
    forn(i, n) {
        int x;
        cin >> x;
        a.pb(x);
    }
    forn(i, m) {
        int x;
        cin >> x;
        b.pb(x);
    }
    int res = 0;
    for (int x=1; x<=100; x++) {
        bool ok = true;
        forv(i, a) ok &= x%a[i]==0;
        forv(i, b) ok &= b[i]%x==0;
        res += ok;
    }
    cout << res;
    return 0;
}