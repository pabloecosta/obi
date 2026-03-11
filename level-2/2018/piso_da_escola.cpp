
#include <iostream>

using namespace std;

int main(){

    int length, width;
    cin >> width >> length;

    int type2 = 2*(width+length-2);
    int type1 = 2*length*width - (length+width-1);

    cout << type1 << "\n" << type2;
}
