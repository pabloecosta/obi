

#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    vector<char> saida(t);

    for(int i = 0; i < t; i++){
        stack<int> expres;
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
