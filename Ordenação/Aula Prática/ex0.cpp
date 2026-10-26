#include <bits/stdc++.h>
using namespace std;

int numeroAleatorio(int m){
return rand() % m;
}

void troca( int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2=aux;
}

int* vetorAleatorio(int n){
    int * vet = new int[n];
    for(int i=0; i< n; i++)
        vet[i] =  numeroAleatorio(100);
    return vet;
}

int* vetorDecrescente(int n){
    int * vet = new int[n];
    for( int i = 0; i<n; i++){
        vet[i] = 100 - i;
    }
    return vet;
}

void bubbleSort(int vet[], int n){
    for(int i=n-2; i>=0; i--) 
    //i é onde acaba as trocas, é n-2 pois no final da primeira passagem compara-se o penultimo(n-2) com o ultimo(n-2+1 =n-1).
        for(int j=0; j<=i; j++)
        //j vai até i para não passar denovo nos elementos que já foram colocados como os maiores.
            if(vet[j]>vet[j+1])
                troca(&vet[j],&vet[j+1]);         
}

void selectionSort(int vet[], int n){
    for(int i = 0; i < n-1; i++){ // se fosse  i<n, j estaria fora do vetor.
        int min = i;
        for(int j = i+1; j < n; j++) 
            if(vet[j] < vet[min]) min = j; //acha o menor valor depois de i.
        troca(&vet[i], &vet[min]);//coloca no lugar de i.
    }
}

void insertionSort(int vet[], int n){
    for(int i=1; i<n; i++){
        int pivo = vet[i]; //elemento atual
        int j = i-1;
        while(j >= 0 && vet[j] > pivo){ // entra no loop quando o anterior é maior que o atual, sai quando j=-1
            vet[j+1] = vet[j]; //passa os elementos para a posição da frente
            j--;
        }
        vet[j+1] = pivo; //põe o pivo na posição 0
    }
}

int main(){
    int n;
    cin>>n;
    int * vetale = vetorAleatorio(n);
    int * vetdec = vetorDecrescente(n);
    cout<<"Antes:\n";
    for(int i =0; i<n; i++) cout<< vetale[i] << " ";
    cout<<endl;
    for(int i =0; i<n; i++) cout<< vetdec[i] << " ";
    cout<<endl;
    cout<<"Depois:\n";
    //bubbleSort(vetale, n); bubbleSort(vetdec,n);
    //selectionSort(vetale, n); selectionSort(vetdec,n);
    //insertionSort(vetale, n); insertionSort(vetdec,n);
    for(int i =0; i<n; i++) cout<< vetale[i] << " ";
    cout<<endl;
    for(int i =0; i<n; i++) cout<< vetdec[i] << " ";
    cout<<endl;
    delete [] vetale;
    delete [] vetdec;
    return 0;
}