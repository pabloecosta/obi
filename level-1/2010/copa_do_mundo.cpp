/*
Problem: Copa do Mundo / World Cup
Contest: OBI 2010 - Level 1
Topics: Queues
Link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f1/copa/

Idea: Simulate the knockout tournament using a queue.
Initially, enqueue teams 'A' to 'P'. For each match, dequeue the first
two teams, compare their scores, and enqueue the winner back.
At the end, the remaining team in the queue is the champion.
*/


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
