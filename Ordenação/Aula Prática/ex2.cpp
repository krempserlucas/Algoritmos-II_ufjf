#include <bits/stdc++.h> 
using namespace std;

void troca( int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2=aux;
}

void gnomeSort (int vet[], int n){
    for(int i = 0 ; i<n; i++){
        if( i!=0 && vet[i]<vet[i-1]){
            troca(&vet[i],&vet[i-1]); 
            i-=2;
        }
    }
}  

int main(){
    int n;
    cin>>n;
    int *vet = new int[n];
    for(int i = 0; i<n; i++) cin>>vet[i];
    gnomeSort(vet,n);
    for(int i = 0; i<n; i++) cout<<vet[i]<<" ";
    cout<<endl;
    delete [] vet;
    return 0;
}