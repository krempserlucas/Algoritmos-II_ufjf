#ifndef ALUNO_H
#define ALUNO_H

class Aluno{
    private:
    int matricula;
    int idade;
    int n;
    double *nota;
    public:
    void definirAluno();
    void imprimirAluno();
    double calcularMedia();
    bool foiAprovado();
};

#endif