/*
Desenvolver uma função recursiva para calcular e retornar
o valor do n-ésimo número harmônico H(n)
*/
#include <bits/stdc++.h>
using namespace std;
float harmonico(int n){
    if(n==1) return 1;
    return harmonico(n-1) + 1/(float)n;
}

int main(){
    int n;
    cin>>n;
    cout<<harmonico(n)<<endl;
    return 0;
}