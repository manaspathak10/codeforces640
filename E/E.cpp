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
ll a[80001];
void solve(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    vector<bool> sum(80001,false);
    for(int i=0; i<n; i++){
        int cur=a[i];
        for(int j=i+1; j<n; j++){
            cur+=a[j];
            if(cur>8000){
                break;
            }
            else{
                sum[cur]=true;
            }
        }
    }
    int ans=0;
    for(int i=0; i<n; i++){
        if(sum[a[i]]) ans++;
    }
    cout << ans << endl;
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