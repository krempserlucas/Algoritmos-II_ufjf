/*
Faça um algoritmo para calcular a média dos elementos de
um vetor de tamanho n e analise a solução implementada,
calculando a soma das frequências.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a; //1
    cin>>n; //1
    int vet[n]; //1
    cin>>vet[0]; //1
    for(int i = 1; i<n; i++){ //n
        cin>> a; //n-1
        vet[i] = vet[i-1] + a; //n-1
    }
    cout<< vet[n-1] / n << endl; // 1
}
//  3n + 3