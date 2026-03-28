

#include <bits/stdc++.h>
using namespace std;

int main(){

    queue<char> saida;

    for(int i = 65; i < 81; i++){
        saida.push(char(i));
    }

    for(int i = 0; i < 15; i++){
        int x, y;
        cin >> x >> y;

        if(x > y){
            saida.push(saida.front());
            saida.pop();
            saida.pop();
        }
        else{
            saida.pop();
            saida.push(saida.front());
            saida.pop();
        }
    }

    cout << saida.front() << endl;

    return 0;
}
