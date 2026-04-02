/*
Problem: Mapa / Map 
Contest: OBI 2017 - Level 2
Topics: BFS, Grid
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2017/f2/mapa/

Idea: Using BFS to find the current position of Hermione on the given grid.
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int l, c;
    cin >> l >> c;

    vector<vector<char>> mapa(l, vector<char>(c));
    queue<pair<int, int>> fila;

    for(int i = 0; i < l; i++){
        string s;
        cin >> s;

        for(int j = 0; j < c; j++){
            mapa[i][j] = s[j];
        }
    }

    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(mapa[i][j]=='o'){
                fila.push({i, j});
                while(!fila.empty()){

                    bool unico = true;

                    auto [x, y] = fila.front();
                    if(x-1 >= 0 && mapa[x-1][y]=='H'){
                        fila.push({x-1, y});
                        mapa[x-1][y] = 'x';
                        unico = false;
                     }
                    if(x+1 < l && mapa[x+1][y]=='H'){
                        fila.push({x+1, y});
                        mapa[x+1][y] = 'x';
                        unico = false;
                    }
                    if(y-1 >= 0 && mapa[x][y-1]=='H'){
                        fila.push({x, y-1});
                        mapa[x][y-1] = 'x';
                        unico = false;
                    }
                    if(y+1 < c && mapa[x][y+1]=='H'){
                        fila.push({x, y+1});
                        mapa[x][y+1] = 'x';
                        unico = false;
                    }
                    if(unico) cout << x+1 << " " << y+1;
                    fila.pop();
                }
            }
        }
    }

    return 0;
}
