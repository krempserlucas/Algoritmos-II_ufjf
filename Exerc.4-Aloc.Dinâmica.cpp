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