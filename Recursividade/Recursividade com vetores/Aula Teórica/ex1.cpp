/*
Desenvolver uma função recursiva para calcular e retornar
o menor valor de um vetor com n números inteiros.
*/
#include <bits/stdc++.h>
using namespace std;

int menor1( int vet[], int n){
    if(n==1) return vet[0];
    int m = menor1( vet, n-1);
    return m < vet[n-1] ? m : vet[n-1];
}

int auxmenor( int vet[], int i, int n){
    if(i== n-1) return vet[i];
    int m = auxmenor( vet, i+1, n);
    return m < vet[i] ? m : vet[i];
}
int menor2(int vet[], int n){
    auxmenor(vet,0, n);
}

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i <n; i++) cin>> vet[i];
    cout<<"MENOR1: " << menor1(vet, n) << endl;
    cout<<"MENOR2: " << menor2(vet, n) << endl;
    return 0;
}