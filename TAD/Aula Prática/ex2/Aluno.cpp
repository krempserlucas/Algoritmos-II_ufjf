#include <bits/stdc++.h>
#include "Aluno.h"
using namespace std;

Aluno::Aluno(string n, string mat){
    nome = n;
    matricula = mat;
}

Aluno::~Aluno(){
    cout<<"Destruindo o aluno: "<< nome << endl;
}

void Aluno::lePresenca(){
    for(int i = 0; i<7; i++) cin>>presenca[i];
}

void Aluno::leNotas(){
    for(int i = 0; i<7; i++) cin>>notas[i];
}

double Aluno::calculaMedia(){
    double sum=0;
    for(int i = 0; i<7; i++) sum+=notas[i];
    return sum / 7;
}

void Aluno::setNome( string n){
    if( n.size() > 100) 
        cout<<"Não existe nome com main de 100 casas\n";
    else if( n == "zumbi")
        cout<<"Morreu ja\n";    
    else 
        nome = n;
}

string Aluno::getNome() const{
    return nome;
}

void Aluno::setMat( string n){
    matricula = n;
}

string Aluno::getMat () const{
    return matricula;
}

void Aluno::setIdade( int n){
    if(n<0)
        cout<<"Erro, idade não pode ser negativa\n";
    else
        idade = n;
}

int Aluno::getIdade() const{
    return idade;
}

void Aluno::relatorio(){
    cout <<"Nome: "<<  getNome() << endl;
    cout<<"Idade: "<< getIdade() << endl;
    cout<<"Matricula: "<< getMat() << endl;
        for(int i = 0; i < 7; i++)
            if( presenca[i] )
                cout<<"Matéria "<< i <<": Frequente\n";
            else
                cout<<"Matéria "<< i <<": Infrequente\n";
        for(int i = 0; i < 7; i++)
            if( notas[i] >=60 )
                cout<<"Matéria "<< i <<": Aprovado\n";
            else
                cout<<"Matéria "<< i <<": Reprovado\n"; 
}