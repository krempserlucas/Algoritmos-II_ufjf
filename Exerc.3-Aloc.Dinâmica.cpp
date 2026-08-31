#include <bits/stdc++.h>
using namespace std;
int* indicesPares(int vet[], int n, int tam){
    int *par = new int[tam];
    int j=0;
    for(int i=0; i<n; i++){
        if(vet[i]%2==0){
            *(par + j)=vet[i];
            j++;
        }
    }

    return par;
}
int main(){
   int n;
   cin>>n;
   int *vet = new int[n];
   for(int i=0; i<n; i++) cin>>vet[i];

   int tam=0;
   for(int i=0; i<n; i++) 
        if(vet[i]%2==0) 
            tam++;

   int *par = indicesPares( vet, n, tam);
 
   for(int i = 0 ; i<tam; i++){
    cout<< par[i] << " ";
   } 
   cout<<endl;

    return 0;
}