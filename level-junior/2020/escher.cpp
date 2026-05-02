

#include <bits/stdc++.h>
using namespace std;

bool lascou=false;

int main(){

    int n; cin >> n;

    vector<int> s(n+1);

    for(int i = 1; i <= n; i++) cin >> s[i];

    int soma = s[1]+s[n];
    int ini = 2, fim = n-1;
    while(!lascou && ini <= fim){

        if(s[ini]+s[fim]!=soma){
            lascou = true;
            break;
        }
        else{
            ini++;
            fim--;
        }
    }

    if(!lascou) cout << 'S' << endl;
    else cout << 'N' << endl;

}
