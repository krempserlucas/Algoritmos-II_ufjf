/*
Desenvolver uma func ̧ao ̃ recursiva para calcular e retornar
o menor valor de um vetor com n numeros inteiros.  ́
*/
#include <bits/stdc++.h>
using namespace std;

int menor(int vet[], int n){
    if(n==0) return vet[n];
    int m=menor(vet,n-1);
    if(m<vet[n-1]) 
        return m;
    else
        return vet[n-1];
}

int main(){
    int n; 
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++) cin >> vet[i];
    cout<< menor(vet, n) << endl;
    return 0;
}