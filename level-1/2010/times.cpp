
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
        times[i%t].push((pq.top()).second);
        pq.pop();
    }
    
    for(int i = 1; i <= t; i++){
        
        cout << "Time" << " " << i << endl;
        while(!times[i%t].empty()){
            cout << times[i%t].top() << endl;
            times[i%t].pop();
        }
        cout << "\n";
        
    }
}
