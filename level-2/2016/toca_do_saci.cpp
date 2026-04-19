/*
Problem: Toca do Saci / Saci's lair
Contest: OBI 2016 - Level 2
Topics: Grid, Simulation
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2016/f1/toca-saci/

Idea: Compute how many rooms are necessary to pass by to find the exit of Saci's lair.
Starting from the exit, (number 3) we need to follow a path made by numbers 1 untill reach
number 2 in the grid. For each number 1 passed by, we add 1 unit to the rooms counter.
*/

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
