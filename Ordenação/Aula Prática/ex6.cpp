#include <bits/stdc++.h>
using namespace std;

void swap (int*a, int*b){
    int aux = *a;
    *a = *b;
    *b=aux;
}

void heapify(int vet[], int i, int n){
    int l = 2*i+1;
    int r = 2*i+2;
    int m = i;
    if(l < n && vet[l] > vet[m])
        m = l;
    if(r < n && vet[r] > vet[m])
        m = r;
    if(m != i){
        swap(&vet[i], &vet[m]);
        heapify(vet, m, n);
    }
}

void heapSort(int vet[], int n){
    for(int i = n/2-1; i >= 0; i--)
        heapify(vet, i, n);
    for(int i = n-1; i >= 0; i--){
        swap(&vet[0], &vet[i]);
        heapify(vet, 0, i);
    }
}

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i< n; i++) cin>> vet[i];
    heapSort(vet, n);
    for(int i=0; i< n; i++) cout<< vet[i];
    return 0;
}