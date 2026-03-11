/*
Problem: Piso da Escola / School Floor
Contest: OBI 2018 - Level 2
Topics: Geometry, Implementation
Link: https://olimpiada.ic.unicamp.br/pratique/p2/2018/f1/piso/

Idea: Given the dimensions of the floor (width and length), compute how many tiles of each type
are needed to cover the entire floor.

By analyzing the geometric structure of the grid, we can derive formulas for both tile types
based on the floor dimensions.
    This problem mainly practices geometric reasoning and algebraic manipulation.
*/

#include <iostream>

using namespace std;

int main(){

    int length, width;
    cin >> width >> length;

    int type2 = 2*(width+length-2);
    int type1 = 2*length*width - (length+width-1);

    cout << type1 << "\n" << type2;
}
