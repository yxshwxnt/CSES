#include <bits/stdc++.h>
#define ll long long 
#define ff first 
#define ss second
#define MOD = 998244353;
#define mod 1000000007
#define N 100001
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pb push_back
#define all(x)  (x).begin(),(x).end()
#define print(v)  for (auto x : v) cout << x <<" "; cout <<endl; 
#define take(v, n)  for (int i = 0; i < n; i++)  cin >> v[i];
using namespace std; 

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void solve(){
    ll n; 
    cin>>n; 
    cout<<n<<" "; 
    while(n!=1){
        if(n%2)   n=(n*3)+1; 
        else  n/=2; 
        cout<<n<<" "; 
    }
    cout<<endl; 
}

int main(){
    fast() ;
    ll t = 1 ;
    // cin >> t ;
    while(t--){
        solve();
    }
    return 0; 
}