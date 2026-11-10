#ifndef PROVA_H
#define PROVA_H

class Prova{
    private:
        int n;
        double *notasQuestoes;
        double notaFinal;
    public:
        Prova(int nq);
        ~Prova();
        void leNotas();
        double obtemNotaFinal();
};

#endif