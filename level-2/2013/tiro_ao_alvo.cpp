/*
Problem: Tiro ao Alvo / Target Shooting
Contest: OBI 2013 - Level 2
Topics: Geometry, Binary Search
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2013/f1/alvo/

Idea: For each shot on the target, compute how many points Juquinha scores.
The scoring works as follows: for each circle where the shot is contained, Juquinha earns one point.
Finally, compute the total score.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> r;
ll pontos, meio;

bool dentro(ll x, ll y, ll r){
    
    if(x*x + y*y <= r*r) return true;
    return false;
    
}

int main(){
    
    ll c, t; cin >> c >> t;
    
    r.resize(c+1);
    
    for(int i = 1; i <= c; i++){
        cin >> r[i];
    }
    
    for(int i = 0; i < t; i++){
        ll x, y; cin >> x >> y;
        
        ll ini = 1, fim = c;
        
        while(ini <= fim){
            
            meio = (fim + ini)/2;
            
            if(!dentro(x, y, r[meio])) ini = meio+1;
            else fim = meio - 1;
            
        }
        
        pontos += c - ini + 1;
    }
    
    cout << pontos << endl;
}
