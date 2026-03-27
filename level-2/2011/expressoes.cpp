/*
Problem: Expressões / Expressions
Contest: OBI 2011 - Level 2
Topics: Stacks
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2011/f2/expressoes/

Idea:
Use a stack to validate the expression.
Push opening brackets ('(', '[', '{') and for each closing bracket,
check if it matches the top of the stack. If not, the expression is invalid.
At the end, the stack must be empty.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    vector<char> saida(t);

    for(int i = 0; i < t; i++){
        stack<char> expres;
        string s;
        cin >> s;

        for(char c : s){
            if(expres.empty()==true){
                if(c=='(' || c=='[' || c=='{'){
                    expres.push(c);
                }
                else{
                    saida[i] = 'N';
                    break;
                }
            }
            else{
                if(expres.top()=='(' && c==')'){
                    expres.pop();
                }
                else if(expres.top()=='[' && c==']'){
                    expres.pop();
                }
                else if(expres.top()=='{' && c=='}'){
                    expres.pop();
                }
                else if(c=='{' || c=='[' || c=='('){
                    expres.push(c);
                }
                else{
                    saida[i] = 'N';
                    break;
                }
            }
        }

        if(expres.empty()==false){
            saida[i] = 'N';
        }

        if(saida[i]!='N'){
            saida[i] = 'S';
        }
    }

    for(int i = 0; i < t; i++){
        cout << saida[i] << endl;
    }

}
