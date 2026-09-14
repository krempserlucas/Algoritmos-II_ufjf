/*
Crie uma função recursiva que recebe como parâmetros 
dois vetores de inteiros vet1 e vet2 de mesmo tamanho n. A
função deve verificar recursivamente se os dois vetores são
iguais (possuem os mesmos valores). Caso nao sejam
iguais, a função deve retornar a primeira posição em que 
os valores de vet1 e vet2 sejam diferentes. Caso os vetores
sejam iguais, a função deve retornar -1. 
Faça um programa que crie e aloque dinamicamente dois
vetores de tamanho n, lido do teclado. Em seguida, realize
a leitura dos elementos dos vetores. Após isso, chame a  
função iguais, imprimindo seu retorno.
*/
#include <bits/stdc++.h>
using namespace std;

int iguais(int vet1[], int vet2[], int n){
    if(n-1 == 0 && vet1[0] == vet2[0]) 
        return -1;
    if( vet1[0] != vet2[0])
     return n-1;
    else
    return  iguais(vet1 +1, vet2 +1 , n-1);
}

int main(){
  int n;
  cin>>n;
  int *vet1 = new int[n];
  for(int i=0; i<n; i++) cin>>vet1[i];
  int *vet2 = new int[n];
  for(int i=0; i<n; i++) cin>>vet2[i];
  cout<< iguais(vet1, vet2, n) << endl;

    return 0;
}