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
    ll n,k;
    cin >> n >> k;
    ll wo=n-(k-1),we=n-(2*(k-1));
    if(wo%2==1&&wo>=1){
        cout << "YES" << endl;
        k--;
        while(k>0){
            cout << 1 << " ";
            k--;
        }
        cout << wo << endl;
    }
    if(we%2==0&&we>=2){
        cout << "YES" << endl;
        k--;
        while(k>0){
            cout << 2 << " ";
            k--;
        }
        cout << we << endl;
    }
    cout << "NO" << endl;
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