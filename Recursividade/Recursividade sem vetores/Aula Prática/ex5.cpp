/*
Implementar uma função recursiva para calcular x mod y,
que indica o resto da divisão (módulo) de um número  
inteiro por outro.
*/
#include <bits/stdc++.h>
using namespace std;
int modulo(int x, int y){
    if(x==y) return 0;
    if(x<y) return x;
    return modulo( x-y, y);
}

int main(){
    int x, y;
    cin>>x>>y;
    cout<<modulo(x,y)<<endl;
    return 0;
}