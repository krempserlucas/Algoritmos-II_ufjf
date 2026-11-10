#ifndef ALUNO_H
#define ALUNO_H

#include <bits/stdc++.h>
using namespace std;

class Aluno{
    private:
        int idade;
        string nome, matricula;
        double notas[7];
        bool presenca[7];

    public:
        Aluno(string n, string mat);
        ~Aluno();
        void lePresenca();
        void leNotas(); 
        double calculaMedia(); 
        void setNome(string n);
        string getNome() const;
        void setMat(string n);
        string getMat () const;
        void setIdade(int n);
        int getIdade () const;
        void relatorio();
};

#endif