/*
Desenvolver uma função recursiva para, dado um número
inteiro positivo val, calcular e retornar a soma de seus
dígitos.
*/
#include <bits/stdc++.h>
using namespace std;
int smdig(int n){
    if(n/10==0) return n;

    int c=0, m=n;
    while(m/10!=0){
        m/=10;
        c+=1;
    }
    
   return m + smdig(n-(m*(pow(10,c)))); 
}

int main(){
    int val;
    cin>>val;
    int resp = smdig(val);
    cout<<resp<<endl;
    return 0;
}