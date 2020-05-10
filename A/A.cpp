#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(a) a.begin(), a.end()
#define rev(a) reverse(all(a))
#define ld long double
const ll mod=1e9+7;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
void solve(){
    ll n,count=0;
    cin >> n;
    vector<ll> v;
    while(n>0){
        ll temp=(n%10)*pow(10,count);
        if(temp!=0)v.pb(temp);
        n/=10;
        count++;
    }
    cout << v.size() << endl;
    for(auto i: v){
        cout << i << " ";
    }cout << endl;
}
int main() {
    IOS;
    int t=1;
    cin >> t;
    while(t--){
        solve();
    }
	return 0;
}