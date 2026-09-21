#include <bits/stdc++.h>
using namespace std;

bool buscaBinaria(int vet[], int n, int k){
    if(n<=0) 
        return false;
    if( vet[n/2] == k) 
        return true;
    else if(vet[n/2]<k)
        return buscaBinaria(vet + 1 + n/2, n - 1 - n/2, k);
    else  
        return buscaBinaria(vet , n/2 , k);
    
}

int main(){
    int n, k;
    cout<<"Tamanho do vetor: ";
    cin>>n;
    int vet[n];
    cout<<"Vetor: ";
    for(int i=0; i<n; i++) cin >> vet[i];
    cout<<"Chave: ";
    cin>>k;
    cout<<buscaBinaria(vet,n,k)<<endl;
    return 0;
}