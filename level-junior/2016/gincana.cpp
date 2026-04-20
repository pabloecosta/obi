/*
Problem: Gincana
Contest: OBI 2016 - Level Junior
Topics: GCD, Implementation
Link: https://olimpiada.ic.unicamp.br/pratique/pj/2016/f2/gincana/

Idea: Given two integers n and m, find the greatest value x that is no bigger than m
such as gcd(n, x) = 1.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b){
    if(a < b) swap(a, b);
    
    if(a%b==0) return b;
    
    return gcd(b, a%b);
}

int main(){
    ll n, m; cin >> n >> m;
  
    ll x = m;
    while(gcd(x, n)!=1) x--;
    cout << x << endl;
  
}
