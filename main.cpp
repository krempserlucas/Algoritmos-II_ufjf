#include <bits/stdc++.h>
using namespace std;
void leValores(int n, int *soma, float *media, int *maior, int *menor){
    int vet[n]; 
    for( int i = 0; i < n; i++ ){
        cin>>vet[i];
    }

    for(int i=0; i < n; i++) *soma+=vet[i];
    *media = *soma/n;

    *menor = vet[0]; 
    *maior = vet[0];
    for(int i=0; i<n; i++){
        if( *(vet+i)<*menor) *menor=*(vet+i);
        if( *(vet+i)>*maior) *maior=*(vet+i);
    }
}

int main(){
    int n, soma=0,  maior, menor;
    float media;
    cin>>n;
    leValores( n, &soma, &media, &maior, &menor);
    cout<< soma <<" "<< media << " "<<maior<<" "<< menor;
    return 0;
}