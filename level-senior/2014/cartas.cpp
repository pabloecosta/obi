/*
Problem: Cartas / Cards
Contest: OBI 2014 - Level Senior
Topics: Implementation, Sort
Link: https://olimpiada.ic.unicamp.br/pratique/ps/2014/f1/cartas/

Idea: It's given a sequence of cards and we must compute if they are sorted or not. 
Sort all cards from smallest to greatest and if it matches with the original sequence, return "C".
If not, sort again from greatest to smallest and if it matches with the original sequence, return "D".
If none of above happen, return "N".
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> cartas(5);
    bool ok = false;

    for(int i = 0 ; i < 5; i++){
        cin >> cartas[i];
    }

    vector<int> inicial = cartas;

    sort(cartas.begin(), cartas.end());

    if(cartas==inicial) cout << "C", ok = true;

    sort(cartas.begin(), cartas.end(), greater<int>());

    if(!ok){
        if(cartas==inicial) cout << "D", ok = true;
    }

    if(!ok) cout << "N";

}
