#include <bits/stdc++.h>
#include "Aluno.h"
using namespace std;

int main(){
    Aluno a("Ana", "202665777A");
    int n;
    cin>>n;
    a.setIdade(n);
    a.leNotas();
    double media = a.calculaMedia();
    cout<< media << endl;
    a.lePresenca();
    a.relatorio();
    return 0;
}