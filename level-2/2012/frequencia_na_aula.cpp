/*
Problem: Frequência na Aula / School Frequency
Contest: OBI 2012 - Level 2
Topics: Implementation, Arrays / Set (STL)
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2012/f1/frequencia/

Idea Solution 1:
Read the attendance list and mark each identifier that appears.
Finally, count how many identifiers were marked, which corresponds to the
number of distinct students present.

Idea Solution 2:
Create a set with all registration numbers
and compute how many elements appear in the set.
*/

//Solution 1
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

//Solution 2

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> x(n);
    
    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    unordered_set<int> s(x.begin(), x.end());

    cout << s.size() << endl;
}
