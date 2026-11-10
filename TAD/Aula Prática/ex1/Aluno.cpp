#include <bits/stdc++.h>
#include "Aluno.h"
using namespace std;

void Aluno::definirAluno(){
    cin>>matricula;
    cin>>idade;
    cin>>n;
    nota = new double[n];
    for(int i=0; i<3; i++) cin>> nota[i];
}
void Aluno::imprimirAluno(){
    cout<<matricula<<endl;
    cout<<idade<<endl;
    for(int i=0; i<n; i++) cout<< nota[i]<<endl;
}
double Aluno::calcularMedia(){
    double sum = 0;
    for(int i = 0; i < 3; i++) sum+=nota[i];
    return sum/3;
}
bool Aluno::foiAprovado(){
    double med = calcularMedia();
    delete [] nota;
    return (med>=60 ? true : false);
}
