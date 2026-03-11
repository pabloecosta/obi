/*
Problem: Móbile / Mobile
Contest: OBI 2015 - Level Junior
Topics: Implementation
Link: https://olimpiada.ic.unicamp.br/pratique/pj/2015/f1/mobile/

Idea: Check whether the mobile is balanced at all levels
*/
#include <iostream>

using namespace std;

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(a==(b+c+d) && b+c==d && b==c){
        cout << "S";
    }
    else{
        cout << "N";
    }
}
