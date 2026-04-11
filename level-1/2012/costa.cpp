

#include <bits/stdc++.h>
using namespace std;

int main(){

    int m, n; cin >> m >> n;

    int c = 0;

    vector<vector<char>> grid(m, vector<char>(n));

    for(int i = 0; i < m; i++){
        string s; cin >> s;

        for(int j = 0; j < n; j++){
            grid[i][j] = s[j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j]=='#'){
                if(i+1 < m && grid[i+1][j]=='.'){
                    c++;
                    continue;
                }
                if(i-1 >= 0 && grid[i-1][j]=='.'){
                    c++;
                    continue;
                }
                if(j+1 < n && grid[i][j+1]=='.'){
                    c++;
                    continue;
                }
                if(j-1 >= 0 && grid[i][j-1]=='.'){
                    c++;
                    continue;
                }
                if(i == 0 || i == m-1 || j == 0 || j == n-1) c++;
            }
        }
    }

    cout << c << endl;

    return 0;

}
