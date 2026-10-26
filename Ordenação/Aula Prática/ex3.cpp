#include <bits/stdc++.h> 
using namespace std;

void troca( int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2=aux;
}

int menor(int vet[], int n){
    int idx=0;
    for(int i = 0; i<n; i++){
        if(vet[idx]>vet[i]) idx = i;
    }
    return idx;
}
void selectionSort(int vet[], int n){
    if(n<=1) return;
    troca( &vet[0], &vet[menor(vet, n)]);
    selectionSort(vet+1, n-1);
}

int main(){
    int n;
    cin>>n;
    int *vet = new int[n];
    for(int i = 0; i<n; i++) cin>>vet[i];
    selectionSort(vet,n);
    for(int i = 0; i<n; i++) cout<<vet[i]<<" ";
    cout<<endl;
    delete [] vet;
    return 0;
}