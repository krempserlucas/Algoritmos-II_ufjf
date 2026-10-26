//em desenvolvimento
#include <bits/stdc++.h>
using namespace std;

void troca( int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}

int partition( int vet[], int esq , int dir ){
    int meio=(dir+esq)/2;
    troca(&vet[meio], &vet[esq]);
    int i = esq;
    for(int j= esq  + 1; j <= dir; j++){
        if( vet[j] < vet[esq]){
            i++;
            troca(&vet[j],  &vet[i]);
        }
    }
    troca(&vet[esq],  &vet[i]);
    return i;
}

int quickFind(int vet[], int esq, int dir, int k){
    if(esq==dir) return vet[esq];
    if(esq<dir){
        int p = partition(vet, esq , dir);
        if(p == k) 
            return vet[p];
        else if (k < p) 
            return quickFind(vet, esq, p - 1, k);
        else 
            return quickFind(vet, p + 1, dir, k);
    }
    return -1;  
}

int auxQuickFind(int vet[], int n, int k){
    return quickFind( vet, 0,  n-1,  k);
}
int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i< n; i++) cin>> vet[i];
    int k;
    cin>>k;
    cout<<"O "<< k <<" menor elemento é " << auxQuickFind(vet, n, k-1);
    return 0;
}