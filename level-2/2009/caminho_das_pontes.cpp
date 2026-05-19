
#include <bits/stdc++.h>
using namespace std;

vector<vector<pair<int, int>>> g;
vector<int> dist;

void dij(int ini){

    dist[ini] = 0;
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> fila;

    fila.push({dist[ini], ini});

    while(!fila.empty()){

        auto [dist_atual, no] = fila.top();
        fila.pop();

        if(dist_atual > dist[no]) continue;

        for(auto v : g[no]){
            int vertice = v.first;
            int peso = v.second;

            int nova_dist = dist[no] + peso;

            if(nova_dist < dist[vertice]){
                dist[vertice] = nova_dist;
                fila.push({peso, vertice});
            }
        }
    }
}

void solve(){
    int n, m; cin >> n >> m;

    dist.resize(n+2);
    g.resize(n+2);

    for(int i = 0; i < dist.size(); i++) dist[i] = 1e6;
    
    for(int i = 0; i < m; i++){
        int s,t,b; cin >> s >> t >> b;

        g[s].push_back({t, b});
        g[t].push_back({s, b});
    }

    dij(0);

    cout << dist[dist.size() - 1];
}

int main(){
    cin.tie(nullptr)->ios::sync_with_stdio(0);
    solve();
}
