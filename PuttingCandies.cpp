#include <bits/stdc++.h>
// #include <sys/resource.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
 
// Pragmas
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
 
// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
// template<typename T>
// using oset =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
// Constants
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 1e9 + 7;
 
#define F first
#define S second
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
#define int long long

 
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v) { for (auto &it : v) cin >> it; return istream; }
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
template <typename T, typename... Args>
void print(T &&t, Args &&... args)
{
    cout << t << " ";
    print(forward<Args>(args)...);
}

    



void solve(int tc)
{
        
        
     ll n , k; cin >> n >> k;
    vector<int> a(n); 
    cin >> a;
    vector<ll> ar;
    vector<bool> vis(n  , false);
    ll i = 0;
    ll sum = 0;
    while (!vis[i]){
        vis[i] = true;
        sum += a[i];
        ar.push_back(i);
        i = (sum%n);
    }
     sum = 0;
//    for (auto x : ar) cout << x << " ";
    for (ll j = 0 ; j<ar.size() and k > 0 ; j++){
        ll x = ar[j];
        if (x == i){
            ll thissum = 0;
            ll c = 0;
            for (ll m = j ; m < ar.size() ; m++ , c++){
                thissum += a[ar[m]];
            }
            ll times = k/c;
            sum = sum + (times*thissum);
            k = k%c;
            for (ll m = j ; m < ar.size() and k > 0 ; m++ , k--){
                sum += a[ar[m]];
            }
        }
        else{
            sum += a[x];
            k--;
        }
    }
    cout << sum << '\n';
}
 
int32_t main()  
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << setprecision(12) << fixed;
 
   
    int tests = 1;
   
    for (int tt = 1; tt <= tests; tt++)
         solve(tests);
            // {
            //     cout << compareVersion("1.0","1.0.0");
            // }

    return 0;
}