/*
Implemente uma função que calcule o produto escalar
entre dois vetores do tipo de dados float. No programa
principal você deve ler o tamanho n dos vetores, os quais
devem ser alocados dinâmicamente usando new. Depois,
voce deve ler os dados dos vetores e chamar a função ao para
calcular o produto escalar. Por fim, use o operador
delete para desalocar toda memória alocada de forma  
dinâmica.
*/
#include <bits/stdc++.h>
using namespace std;
float prodEscalar(int n, float x[], float y[]){
    float sum=0;
    for(int i=0; i<n; i++){
        sum+=(*(x+i))*(*(y+i));
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    float *x = new float[n], *y =new float[n];
    for(int i=0; i<n; i++) cin>>*(x+i);
    for(int i=0; i<n; i++) cin>>*(y+i);
    float pe= prodEscalar(n, x, y);
    cout<< pe << endl;
    
    delete [] x;
    delete [] y; 

    return 0;
}