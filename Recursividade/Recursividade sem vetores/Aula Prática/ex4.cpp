/*
Desenvolver uma função recursiva para determinar se um
número inteiro n > 0 é primo.
*/
#include <bits/stdc++.h>
using namespace std;
int auxPrimo(int n, int divisor){
    if(divisor==2){
        return n%divisor==0 ? false : true;
    }
    return n%divisor==0 ? false : auxPrimo(n, divisor-1) ;
}
bool elPrimo(int n){
    return auxPrimo(n, n-1);
}   

int main(){
    int n; cin >> n;
    bool r = elPrimo(n);
    r==1 ? cout<<"Primo\n" : cout<<"Não primo\n";
    return 0;
}