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
    cin >> n ;
    ll a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool f=0;
    ll l=1,r=n-1,al=a[0],bob=0,moves=1,prev=a[0];
    while(r>=l){
        if(f){
            ll cur=0;
            while((cur)<=prev&&r>=l){
                cur+=a[l];
                l++;
            }
            f=0;
            prev=cur;
            al+=cur;
        }else{
            ll cur=0;
            while((cur)<=prev&&r>=l){
                cur+=a[r];
                r--;
            }
            f=1;
            prev=cur;
            bob+=cur;
        }
        moves++;
    }
    cout << moves << " " << al << " " << bob <<endl; 
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