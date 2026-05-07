

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visitado;
int ans = 0;

void dfs(int u){

    visitado[u] = true;

    for(int j : adj[u]){
        if(!visitado[j]){
            visitado[j] = true;
            dfs(j);
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    adj.resize(n+1);
    visitado.resize(n+1);

    for(int i = 1; i <= m; i++){

        int a, b; cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    for(int i = 1; i <= n; i++){
        if(!visitado[i]){
            dfs(i);
            ans++;
        }
    }

    cout << ans << endl;
}
