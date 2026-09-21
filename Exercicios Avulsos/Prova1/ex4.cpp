#include <bits/stdc++.h>
using namespace std;

void q1(){
    int *vet = new int[8] {7, 0, -3, 14, 5,-2, 9, 11};
    int *pini = vet;
    int *pfim = vet + 7;
    int aux;
    for(int i = 0 ; i < 4; i++){
        aux = *(pini +i);
        *(pini+i) = *(pfim - i);
        *(pfim - i) = aux;
    }
    int *prun=vet;
    int soma=0, pos = 0;
    for(int i=0; i < 8; i++){
        soma += *(prun + i);
        if(*(prun+i) > 0) pos++;
    }
    cout<<"Soma: "<< soma << endl;
    cout<<"Positivos: "<< pos << endl;
    delete [] vet;
}


int main(){
    q1();
    return 0;
}