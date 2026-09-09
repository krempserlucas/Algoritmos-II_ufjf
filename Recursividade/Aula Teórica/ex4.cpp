/*
Crie uma função recursiva que recebe como parâmetros
um valor inteiro val, um vetor de inteiros vet e seu
tamanho n. A função deve identificar recursivamente a
primeira ocorrência de um número no vetor que seja
menor do que val e substituir este número no vetor por val.
Caso não exista nenhum número no vetor que seja menor
do que val, a função não deve modificar o vetor.
*/
#include <bits/stdc++.h>
using namespace std;
int sequencia(int n, int *npar, int *nimpar){
    cout<<n<<endl;
    if(n%2==0){
        (*npar)++;
        return sequencia(n/2 , npar, nimpar);
    }
    else{
        (*nimpar)++;
        if(n==1) return (*npar + *nimpar);
        else return sequencia(3*n +1 , npar, nimpar);
        
        
    }
}
int main(){
    int n=-1, *npar = new int , *nimpar = new int;
    while(n<0){
        cout<<"Digite um número positivo: ";
        cin>>n;
    }
    *npar=0 ;*nimpar = 0;
    int total = sequencia(n,npar,nimpar);
    cout<< "Total de resultados pares: " << *npar << endl;
    cout<< "Total de resultados ímpares: " << *nimpar << endl;
    cout<< "Total de resultados: " << total << endl;
    delete npar;
    delete nimpar;

    return 0;
}