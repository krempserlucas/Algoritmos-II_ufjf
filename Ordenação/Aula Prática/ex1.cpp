#include <bits/stdc++.h> 
using namespace std;

void troca( int *v1, int *v2){
    int aux = *v1;
    *v1 = *v2;
    *v2=aux;
}

void cocktailSort(int vet[], int n){
    bool v=1, s=0;
    int start = 0, end = 0;
    while(v){
        v=0;
        if(s==0){
            for(int i=start; i<= n - 2 - end; i++){
                if(vet[i]>vet[i+1]){
                    troca( &vet[i], &vet[i+1]);
                    v=1;
                }
            }
            end++;
        }
        else{
            for(int i= n - 1 - end; i>= start + 1; i--){
                if(vet[i]<vet[i-1]){
                    troca( &vet[i], &vet[i-1]);
                    v=1;
                }
            }
            start++;
        }
        s = (s==0) ? 1 : 0;
    }
}   

int main(){
    int n;
    cin>>n;
    int *vet = new int[n];
    for(int i = 0; i<n; i++) cin>>vet[i];
    cocktailSort(vet,n);
    for(int i = 0; i<n; i++) cout<<vet[i]<<" ";
    cout<<endl;
    delete [] vet;
    return 0;
}