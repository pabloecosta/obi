/*
Problem: Times / Teams
Contest: OBI 2010 - Level 1
Topics: Priority Queue
Link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f1/times/

Idea: Sort players by skill using a priority queue and distribute them among teams.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    priority_queue<pair<int, string>> pq;
    
    int n, t; cin >> n >> t;
    
    vector<priority_queue<string, vector<string>, greater<string>>> times(t+1);
    
    for(int i = 0; i < n; i++){
        string s; int h; cin >> s >> h;
        pq.push({h, s});
    }
    
    for(int i = 1; i <= n; i++){
       times[(i-1)%t + 1].push((pq.top()).second);
        pq.pop();
    }
    
    for(int i = 1; i <= t; i++){
        
        cout << "Time" << " " << i << endl;
        while(!times[(i-1)%t + 1].empty()){
            cout << times[(i-1)%t + 1].top() << endl;
            times[(i-1)%t + 1].pop();
        }
        cout << "\n";
        
    }
}
