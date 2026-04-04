/*
Problem: Gincana 
Contest: OBI 2011 - Level Junior
Topics: DFS, Graphs
Link: https://olimpiada.ic.unicamp.br/pratique/pj/2011/f2/gincana/

Idea: Represent each student as a graph vertex and teams as connected components.
Compute the maximum number of teams that can be made, that is, how many connected components there are in total.
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> alunos;
vector<bool> visitados;

void dfs(int i){

    visitados[i] = true;

    for(int c : alunos[i]){
        if(!visitados[c]) dfs(c);
        visitados[c] = true;
    }
}

int main(){

    int n, m; cin >> n >> m;

    alunos.resize(n+1);
    visitados.resize(n+1);

    for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        alunos[x].push_back(y);
        alunos[y].push_back(x);
    }

    int c = 0;

    for(int i = 1; i < n+1; i++){
        if(!visitados[i]) dfs(i), c++;
    }

    cout << c << endl;
    return 0;

}
