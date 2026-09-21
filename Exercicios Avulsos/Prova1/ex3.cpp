/*

*/
#include <bits/stdc++.h>
using namespace std;

bool buscaBinaria(int vet[], int n, int c){
    if(n==0) return false;
    else{
        int meio = n/2;
        if(vet[meio] == c) return true;
        else if(c<vet[meio]) return buscaBinaria(vet, meio , c);
        else return buscaBinaria(vet+meio+1, n-meio-1, c);
    }
}



int main(){
    int n, c; 
    cin>>n>>c;
    int vet[n];
    for(int i=0; i<n ; i++) cin>>vet[i];
    cout<<buscaBinaria(vet, n , c);
    
    return 0;
}