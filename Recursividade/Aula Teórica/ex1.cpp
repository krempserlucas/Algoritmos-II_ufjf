/*
Desenvolver uma função recursiva que recebe um número
inteiro n e retorna o valor do somatório:
n + (n − 1) + (n − 2) + . . . + 2 + 1.
*/

#include <bits/stdc++.h>
using namespace std;
int sigma(int n){
    if(n==0) return 0;
    return n + sigma(n-1);
}
int main(){

    int n;
    cin>>n;
    int resp = sigma(n);
    cout<< resp << endl;

    return 0;
}