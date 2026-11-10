#include <bits/stdc++.h> 
#include "Aluno.h"
using namespace std;

int main(){
    Aluno Lucas;
    Lucas.definirAluno();
    Lucas.imprimirAluno();
    (Lucas.foiAprovado()) ? cout<<"Aprovado\n" : cout<<"Reprovado\n";
    return 0;   
}