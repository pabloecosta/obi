/*
Problem: Tomadas / Plugs
Contest: OBI 2013 - Level Junior
Topics: Implementation
Link: https://olimpiada.ic.unicamp.br/pratique/pj/2013/f1/tomadas/

Idea: Each power strip uses one socket from the previous strip,
so the total number of available sockets is the sum of all sockets minus 3.
*/

#include <iostream>

using namespace std;

int main(){
    int t1, t2, t3, t4;

    cin >> t1 >> t2 >> t3 >> t4;

    cout << t1+t2+t3+t4-3 << endl;

    return 0;
}
