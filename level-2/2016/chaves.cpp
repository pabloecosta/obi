/*
Problem: Chaves / Braces
Contest: OBI 2016 - Level 2
Topics: Stacks
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2016/f1/chaves/

Idea: Check if in the full text all the braces are put in the right way.
Using stacks, check if for each opening brace '{' we have a closing one '}'.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    cin.ignore();

    char saida='S';

    stack<char> chaves;
    bool ok = true;

    for(int i = 0; i < n; i++){

        string s;
        getline(cin, s);

        for(char c : s){

            if(c=='{') chaves.push(c);
            else if(c=='}'){
                if(chaves.empty()==true){
                    saida = 'N';
                    ok = false;
                    break;
                }
                else if(chaves.top()=='{'){
                    chaves.pop();
                }
            }
        }
        if(!ok) break;
    }

  if(!chaves.empty()) saida = 'N';
  
    cout << saida;
}
