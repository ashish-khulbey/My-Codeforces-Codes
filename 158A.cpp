// Problem Link : https://codeforces.com/problemset/problem/158/A

#include<bits/stdc++.h>
#define ll long long
 
using namespace std;
 
bool f(ll x, ll y) {
    return x > y;
}
 
void solve() {
    ll n, k;
    cin>>n>>k;
    ll temp = n;
    vector<ll> v;
    ll val;
    while (temp--) {
        cin>>val;
        v.push_back(val);
    }
    val = v[k-1];
    sort(v.begin(), v.end());
    ll cnt=0;
    auto it = lower_bound(v.begin(), v.end(), val);
    for (auto x = it; x!=v.end(); x++) {
        if (*x > 0) {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
 
    solve();
 
    return 0;
}
