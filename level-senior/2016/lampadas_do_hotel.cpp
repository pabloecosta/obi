

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
