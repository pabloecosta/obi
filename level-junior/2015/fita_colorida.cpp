/*
Problem: Colored Tape
Contest: OBI 2015 - Level Junior

Idea: 
For each non-colored tape, compute the distance to the nearest zero on both the left and right sides.
Compare these distances and paint the tape according to the closest zero.

*/

#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int fitas[n]={}, distEsq[n]={}, distDir[n]={};

    for(int i=0; i<n; i++){
        cin >> fitas[i];
    }

    int zeroEsq = -1e9;

    for(int i=0; i<n; i++){
        if(fitas[i]==0){
            zeroEsq=i;
            distEsq[i]=0;
        }
        else{
            distEsq[i]= i - zeroEsq;
            if(distEsq[i]>9){
                distEsq[i]=9;
            }
        }
    }

    int zeroDir = 1e9;

    for(int i=(n-1); i>=0; i--){
        if(fitas[i]==0){
            zeroDir=i;
            distDir[i]=0;
        }
        else{
            distDir[i]= zeroDir - i;
            if(distDir[i]>9){
                distDir[i]=9;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(distDir[i]>distEsq[i]){
            cout << distEsq[i] << " ";
        }
        else{
            cout << distDir[i] << " ";
        }
    }
}



