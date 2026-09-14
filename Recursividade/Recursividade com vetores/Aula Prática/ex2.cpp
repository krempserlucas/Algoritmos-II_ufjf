/*
Desenvolver uma função recursiva para calcular e retornar
a quantidade de valores pares de um vetor com n números  
inteiros.
*/
#include <bits/stdc++.h>
using namespace std;

int par(int vet[], int n){
     if( n==1 )
        return vet[0]%2==0 ? 1 : 0;
     return vet[n-1]%2==0 ? par( vet, n-1 )+1 : par( vet, n-1 );
}

int main(){
    int n; 
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++) cin >> vet[i];
    cout<< par(vet, n) << endl;
    return 0;
}