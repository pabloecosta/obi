/*
Problem: Lâmpadas do Hotel / Hotel Bulbs
Contest: OBI 2016 - Level Senior
Topics: Implementation, Conditionals
Link: https://olimpiada.ic.unicamp.br/pratique/ps/2016/f1/lampadas-hotel/

Idea: Simulate the effect of each switch press on the lamps 
and determine the minimum number of presses needed to transform 
the current configuration into the desired one.
*/

#include <iostream>
using namespace std;

int main(){
    int ia, ib, fa, fb, c=0;
    cin >> ia >> ib >> fa >> fb;

    if(ib!=fb){
        c++;
        ib = 1 - ib;
        ia = 1 - ia;
    }

    if(ia!=fa) c++;

    cout << c << endl;

    return 0;
}
