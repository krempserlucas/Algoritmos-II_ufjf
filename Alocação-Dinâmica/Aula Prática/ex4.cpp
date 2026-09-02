/*
Crie uma função que recebe um vetor vet com seu
tamanho tam e um novo tamanho novo para alocação. Se  
o novo tamanho for menor ou igual ao tamanho original,
nada deve ser feito e o vetor original deve ser retornado.
Caso contrário, a função ao deve alocar e retornar um novo  
vetor, preservando as informações do vetor original e  
inicializando as posições restantes com zero.
Faça um programa que aloque um vetor de inteiros com
um tamanho lido do teclado. Em seguida, faça a leitura
dos elementos do vetor e chame a função redimensiona,
passando como terceiro argumento um segundo tamanho,
também lido do teclado. Ao final, imprima o vetor  
modificado. Certifique-se de que toda memória é 
apropriadamente desalocada ao final do programa.
*/
#include <bits/stdc++.h>
using namespace std;
int* redimensiona(int vet[], int tam,int novo){
    if(novo<=tam) return vet;
    int *newvet =new int[novo];
    for( int i = 0; i<tam; i++) newvet[i] = vet[i];
    for( int i=tam; i<novo; i++) newvet[i] = 0;
    return newvet;
}

int main(){
    
    int tam, novo;
    cout<<"Tamanho original: ";
    cin >>tam ; 
    cout<<" Elementos do veetor: ";
    int *vet = new int[tam];
    for( int i = 0; i < tam; i++ ) cin>>*(vet+i);
    cout <<"Novo tamanho: ";
    cin >> novo;

    int *newvet = redimensiona(vet, tam, novo);
    
    for(int i=0; i<novo; i++) cout<< newvet[i];
    cout<< endl;

    delete [] vet;
    delete [] newvet;

    return 0;
}