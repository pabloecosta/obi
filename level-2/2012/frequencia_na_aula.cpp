
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
