/*
Desenvolver uma função recursiva que recebe um valor
inteiro n e imprime todos os inteiros de n ate 0 de forma  ́
decrescente.
*/
#include <bits/stdc++.h>
using namespace std;

void dec(int n){
    cout<<n<< "  ";
    if(n>0) dec(n-1);
}

int main(){
    int n; cin >> n;
    dec(n);
    cout<< endl;
    return 0;
}