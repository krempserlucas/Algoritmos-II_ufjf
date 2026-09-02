/*
Crie uma função que recebe como parâmetro um vetor
vet de inteiros e seu tamanho n. A função deve alocar 
dinâmicamente um novo vetor e copiar para este novo
vetor apenas os elementos das posições de ́ındice par do
vetor original. Ao final, a função deve retornar o vetor 
criado. Observação: o tamanho deste novo vetor criado na
função deve ser o menor possível para acomodar
corretamente seus elementos.
Faça um programa que leia um número inteiro n e aloque
dinamicamente um vetor com n elementos inteiros. Faça
um loop para ler cada um dos valores do vetor. Em
seguida, utilize a função indicesPares para retornar o
novo vetor, que deve ser impresso na sequência. Por fim, 
libere toda a memória alocada dinamicamente.
*/

#include <bits/stdc++.h>
using namespace std;
int* indicesPares(int vet[], int n, int tam){
    int *par = new int[tam];
    int j=0;
    for(int i=0; i<n; i++){
        if(vet[i]%2==0){
            *(par + j)=vet[i];
            j++;
        }
    }

    return par;
}
int main(){
   int n;
   cin>>n;
   int *vet = new int[n];
   for(int i=0; i<n; i++) cin>>vet[i];

   int tam=0;
   for(int i=0; i<n; i++) 
        if(vet[i]%2==0) 
            tam++;

   int *par = indicesPares( vet, n, tam);
 
   for(int i = 0 ; i<tam; i++){
    cout<< par[i] << " ";
   } 
   cout<<endl;
   delete [] par;
   delete [] vet;
    return 0;
}