

#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool ok;

ll mdc(ll a, ll b){
    if(a < b) swap(a, b);
    
    if(a%b==0) return b;
    
    return mdc(b, a%b);
}

int main(){
    ll n, m; cin >> n >> m;
  
    ll x = m;
    while(mdc(x, n)!=1) x--;
    cout << x << endl;
  
}
