/*
Problem: Frequência na Aula / School Frequency
Contest: OBI 2012 - Level 2
Topics: Implementation, Arrays
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2012/f1/frequencia/

Idea:
Read the attendance list and mark each identifier that appears.
Finally, count how many identifiers were marked, which corresponds to the
number of distinct students present.
*/

#include <iostream>

using namespace std;

int main(){

    int n, contador=0;
    cin >> n;

    bool marcador[1000001]={false};

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        marcador[x] = true;
    }

    for(int i=0; i<1000001; i++){
        if(marcador[i]==true){
            contador++;
        }
    }

    cout << contador;

}
