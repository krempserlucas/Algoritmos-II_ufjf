/*
Desenvolver uma função recursiva para calcular e retornar
a quantidade de valores ímpares de um vetor com n
números inteiros.
*/
#include <bits/stdc++.h>
using namespace std;

int impares( int vet[], int n){
    if( n == 1 )
        return (vet[0] % 2 == 0) ? 0 : 1 ;
    int i = impares( vet, n - 1) ;
    return (vet[n-1] % 2 == 0) ? i : ++i ;
}

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i <n; i++) cin>> vet[i];
    cout<<"IMPARES: " << impares(vet,n) << endl;
    return 0;
}