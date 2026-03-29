/*
Problem: Torre / Tower
Contest: OBI 2015 - Level 1
Topics: Matrix
Link: https://olimpiada.ic.unicamp.br/pratique/p1/2015/f2/torre/

Idea: Precompute the sum of each row and each column.
For each cell (i, j), the total attack value of placing the tower there is:
row[i] + column[j] - 2*matrix[i][j]
Iterate over all positions and take the maximum value.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, maior = INT_MIN;
    cin >> n;

    vector<vector<int>> M(n, vector<int>(n));
    vector<int> RowSums(n, 0);
    vector<int> ColSums(n, 0);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> M[i][j];
            RowSums[i] += M[i][j];
            ColSums[j] += M[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maior < RowSums[i] + ColSums[j] - 2*(M[i][j])){
                maior = RowSums[i] + ColSums[j] - 2*(M[i][j]);
            }
        }
    }

    cout << maior << endl;

    return 0;
}
