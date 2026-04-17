


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
