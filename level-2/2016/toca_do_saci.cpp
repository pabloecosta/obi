

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    queue<pair<int, int>> fila;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j]==3){
                fila.push({i, j});
            }
        }
    }
    int cont = 2;

    while(!fila.empty()){

        auto[x, y] = fila.front();
        fila.pop();

        if(x+1 < n && grid[x+1][y]==1){
            fila.push({x+1, y});
            cont++;
            grid[x+1][y] = 0;
            continue;
        }

        if(x-1 >= 0 && grid[x-1][y]==1){
            fila.push({x-1, y});
            cont++;
            grid[x-1][y] = 0;
            continue;
        }

        if(y+1 < m && grid[x][y+1]==1){
            fila.push({x, y+1});
            cont++;
            grid[x][y+1] = 0;
            continue;
        }

        if(y-1 >= 0 && grid[x][y-1]==1){
            fila.push({x, y-1});
            cont++;
            grid[x][y-1] = 0;
            continue;
        }
    }

    cout << cont << endl;

}
