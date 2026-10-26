#include <bits/stdc++.h>
using namespace std;

void merge(int v[], int esq, int meio,int dir){
    int tam = dir - esq + 1;
    int *vm = new int[tam], i=0,  j=esq, k=meio+1;
    for(i; (i<tam)&&k<=dir&&j<=meio; i++){
        if(v[j]<v[k])
            vm[i] = v[j++];
        else 
            vm[i] = v[k++];
    }
    if(j>meio) for(i; i<tam; i++) vm[i] = v[k++]; 
    if(k>dir) for(i; i<tam; i++) vm[i] = v[j++]; 
    for(i=0; i < tam; i++) v[i+esq] = vm[i];
    delete [] vm;
}
void mergeSort(int v[], int esq, int dir){
    if(esq<dir){
        int meio =(dir +esq )/2;
        mergeSort(v, esq, meio);
        mergeSort(v, meio + 1, dir);
        merge(v, esq, meio, dir);
    }
}
void auxMerge(int v[], int n){
    mergeSort(v, 0, n-1);
}
int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i< n; i++) cin>> vet[i];
    auxMerge(vet, n);
    for(int i=0; i< n; i++) cout<< vet[i];
    return 0;
}