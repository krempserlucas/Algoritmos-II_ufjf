/*
Desenvolver uma função recursiva para, dados x e n,
calcular e retornar o seguinte somatório
*/
#include <bits/stdc++.h>
using namespace std;
float soma(float x, int n){
    if(n==1) return x;
    return soma(x, n-1) + pow((-1), n-1)*(pow(x,n)/n) ;
}

int main(){
    float x;
    int n;
    cin>>x>>n;
    cout<< soma(x,n) << endl;
    return 0;
}