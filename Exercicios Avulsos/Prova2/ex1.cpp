#include <bits/stdc++.h>
using namespace std;

    void shellSort(int vet[], int n){
        int h= n/2;
        while(h>=1){
            for(int i = h; i < n; i ++){
                int pivo = vet[i];
                int j = i-h;
                while(j>=0 && pivo<vet[j]){
                    vet[j+h] = vet[j];
                    j-=h;
                }
                vet[j+h] = pivo;
            }
            h/=2;
        }
    }   

    

int main(){
    int n;
    cin>>n;
    int vet[n];
    for(int i=0; i<n; i++){
        cin>>vet[i];
    }
    shellSort(vet, n);
    for(int i=0; i<n; i++){
        cout<<vet[i];
    }
    return 0;
}