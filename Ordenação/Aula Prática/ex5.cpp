#include <bits/stdc++.h>
using namespace std;

void swap (int*a, int*b){
    int aux = *a;
    *a = *b;
    *b=aux;
}
int partition(int v[], int l, int r){
    int c = (l+r)/2;
    int m = (v[c]<=v[r]&&v[c]>=v[l])||(v[c]<=v[l]&&v[c]>=v[r]) ? c : (v[r]<=v[c]&&v[r]>=v[l])||(v[r]<=v[l]&&v[r]>=v[c]) ? r : l;
    swap(&v[m], &v[l]);
    int i=l;
    for(int j = l + 1; j<=r; j++){
        if( v[j]<v[l]){
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i], &v[l]);
    return i;
}
void insertionSort(int v[], int r, int l){
    for(int i =l+1 ; i<=r; i++){
        int pivo = v[i];
        int j = i - 1;
        while(j>=0&& pivo<v[j]){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = pivo;  
    }
}
void auxQuickSort(int v[], int l, int r){
    if(r-l < 30)
        insertionSort(v, r, l);
    else if(l<r){
        int p = partition(v,l,r);
        auxQuickSort(v,l,p-1);
        auxQuickSort(v,p+1,r);
    }
}

void quickSort(int v[], int n){
    auxQuickSort(v,0,n-1);
}

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i< n; i++) cin>> vet[i];
    quickSort(vet, n);
    for(int i=0; i< n; i++) cout<< vet[i];
    return 0;
}