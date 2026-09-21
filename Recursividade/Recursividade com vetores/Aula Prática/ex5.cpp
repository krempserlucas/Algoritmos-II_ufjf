/*
Desenvolver uma função recursiva para, dados um vetor
vet e um número inteiro  n, preencher o vetor com os
valores gerados pelos termos da definição de  f(n). A
função deve retornar a soma de f(n).
*/
#include <bits/stdc++.h>
using namespace std;

int preencheVet(int vet[], int n){
    if(n==1){
     vet[n-1] = 1;
     return vet[n-1];
    }
    else vet[n-1] = pow(n,2) + 1;
    return preencheVet(vet, n-1) + vet[n-1];
}

int main(){
  int n;
  cin>>n;
  int *vet = new int[n];
  for(int i =0 ; i < n; i++) cin>> vet[i];
  int sum = preencheVet(vet, n);
  for(int i=0; i< n; i++) cout<< vet[i] << " "; 
  cout<< endl << sum << endl;

    return 0;
}