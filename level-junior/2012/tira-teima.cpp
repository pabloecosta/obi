/*
Problem: Tira-Teima / Instant Replay
Contest: OBI 2012 - Level Junior
Topics: Implementation, Conditionals
Link: https://olimpiada.ic.unicamp.br/pratique/pj/2012/f2/tenis/

Idea: Check whether the point (x, y) lies inside the rectangular region.
If both coordinates are within the given bounds, the point is inside the rectangle.
*/

#include <iostream>

using namespace std;

int main(){

    int x, y;

    cin >> x >> y;

    if(x>=0 && x<=432 && y>=0 && y<=468){
        cout << "dentro";
    }
    else{
        cout << "fora";
    }
}
