/*
Desenvolver uma função recursiva para calcular e retornar
uma string de caracteres contendo ‘0’ e ‘1’ correspondente
à versão binária de um número inteiro positivo dado.
*/
#include <bits/stdc++.h>
using namespace std;
string func(int n){
    if(n==0)
        return "";
    else{
        string digito = (n%2 == 0) ? "0" : "1";
        return func(n/2) + digito;
    }
}
int main(){
    int n;
    cin>>n;
    cout << func(n) << endl;
    return 0;
}