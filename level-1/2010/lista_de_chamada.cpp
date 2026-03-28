/*
Problem: Lista de Chamada / Attendance List
Contest: OBI 2010 - Level 1
Topics: Set
Link: https://olimpiada.ic.unicamp.br/pratique/p1/2010/f2/chamada/

Idea: Insert the names into a set to automatically sort them.
Then iterate through the set until reaching the k-th element,
and output the corresponding name.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, c=0;
    cin >> n >> k;

    set<string> s;

    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        s.insert(name);
    }

    for(auto p = s.begin(); p != s.end(); p++){
        c++;
        if(c == k){
            cout << *p << endl;
            break;
        }
    }
  
    return 0;
}
