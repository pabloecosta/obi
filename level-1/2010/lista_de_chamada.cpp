

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, c=0;
    cin >> n >> k;

    vector<string> nome(n);

    for(int i = 0; i < n; i++){
        cin >> nome[i];
    }

    set<string> s(nome.begin(), nome.end());

    for(auto p = s.begin(); p != s.end(); p++){
        c++;
        if(c == k){
            cout << *p << endl;
            break;
        }
    }
  
    return 0;
}
