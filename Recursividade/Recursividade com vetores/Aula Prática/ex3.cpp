/*
Desenvolver uma função recursiva para verificar se existe
algum valor negativo em um vetor com n numeros  ́
inteiros.
*/
#include <bits/stdc++.h>
using namespace std;

int neg(int vet[], int n){
     if( n==1 )
        return vet[0]<0 ? 1 : 0;
     return vet[n-1]<0 ? neg( vet, n-1 )+1 : neg( vet, n-1 );
}

int main(){
    int n; 
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++) cin >> vet[i];
    cout<< neg(vet, n) << endl;
    return 0;
}