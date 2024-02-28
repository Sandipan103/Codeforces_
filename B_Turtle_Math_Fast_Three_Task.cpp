#include <iostream>
#include <vector>
#include <map>

using namespace std;

typedef long long ll;

ll mod = 1e9 + 7;

ll mul(ll a, ll b) {
    return ((a % mod) * 1ll * (b % mod)) % mod;
}


template<typename T>
void print(vector<T> &v) {
    for (auto it : v)
        cout << it << " ";
    cout << endl << "------------" << endl;
}

template<typename T>
void print2d(vector<T> &v) {
    for (auto it : v) {
        for (auto x : it)
            cout << x << " ";
        cout << endl;
    }
    cout << endl << "------------" << endl;
}

void Sandipan() {

    ll n, s = 0;
    cin >> n;
    vector<ll> v(n);
    map<int, int> mp;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        s += v[i];
        mp[v[i] % 3]++;
    }

    if (s % 3 == 0) {
        cout << "0" << endl;
        return;
    }
    if (s % 3 == 1 && mp[1] > 0) {
        cout << "1" << endl;
        return;
    }
    if (s % 3 == 2 && mp[2] > 0) {
        cout << "1" << endl;
        return;
    }
    if (s % 3 == 2) {
        cout << "1" << endl;
        return;
    }
    cout << "2" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;

    while (t--)
        Sandipan();

    return 0;
}
