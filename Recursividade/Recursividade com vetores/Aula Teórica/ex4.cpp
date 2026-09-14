/*
Crie uma função recursiva que recebe como parâmetros
um valor inteiro val, um vetor de inteiros vet e seu
tamanho n. A função deve identificar recursivamente a
primeira ocorrência de um número no vetor que seja
menor do que val e substituir este número no vetor por val.
Caso não exista nenhum número no vetor que seja menor
do que val, a função não deve modificar o vetor.
Faça um programa que crie e aloque dinamicamente um
vetor de tamanho n, sendo n lido do teclado. Em seguida,
faça a leitura dos elementos do vetor. Após isso, chame a
função substituiMenor, passando 10 como valor para
val, e depois imprima os elementos do vetor.
*/
#include <bits/stdc++.h>
using namespace std;

void substituiMenor(int val, int vet[], int n){
    bool flag=0;
    if( vet[0] < val ){
         vet[0] = val;
         flag=1;
    }
    if(n-1 != 0 && flag==0)
         substituiMenor(10, vet+1, n-1);
}

int main(){
    int n;
    cin>>n;
    int *vet = new int[n];
    for(int i=0; i <n; i++)
        cin>> vet[i];
    substituiMenor(10 , vet, n);
    for(int i=0; i <n; i++) 
        cout << vet[i] << endl;

    delete [] vet;
    return 0;
}

