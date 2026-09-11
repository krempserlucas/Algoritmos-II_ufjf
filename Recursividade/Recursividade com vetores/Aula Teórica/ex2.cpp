/*
Desenvolver uma função recursiva para calcular e retornar
a soma de todos os valores de um vetor com n números
inteiros.
*/
#include <bits/stdc++.h>
using namespace std;

int sigma( int vet[], int n){
    return (n==1 ? vet[0] : sigma(vet, n-1) + vet[n-1]);
}

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i <n; i++) cin>> vet[i];
    cout<<"SOMATÓRIO: " << sigma(vet, n) << endl;
    return 0;
}