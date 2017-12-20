#include <iostream>
#include<stdio.h>
#include <fstream>
#include<cstdio>
#include <string.h>
#include <cmath>
using namespace std;

void vvid(int k, double j[5]){
    ifstream in("text.txt");
    if (!in) {cout<<"Error file no found"; exit(1);}
    while (!in.eof()){
        in>>j[k];
        k++;
    }
}

double introp(double j[5],double i1,double i2,int k){
    for(int i=0;i<=k-1;i++){
        i1=j[i]*log2(j[i]);
        i2=i2+i1;}
    i2=-i2;
    return i2;
}
