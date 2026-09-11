/*
Desenvolver uma função recursiva que, dados três valores 
inteiros como parâmetros a, b e inc, imprime o intervalo
fechado de a até b com incremento inc.
Exemplo: imprimeIntervalo(1,8,2);
Sa ́ıda: 1 3 5 7
*/
#include <bits/stdc++.h>
using namespace std;

void imprimeIntervalo(int a, int b, int inc){
    if(a > b) return;
    cout << a << " ";
    imprimeIntervalo( a+inc, b , inc);
}

int main(){
    int a, b , inc;
    cin>> a>> b>> inc;
    imprimeIntervalo(a, b, inc); 
    cout<< endl;
    return 0;
}