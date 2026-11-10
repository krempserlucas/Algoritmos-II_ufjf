#include <bits/stdc++.h>
#include "Prova.h"
using namespace std;
Prova :: Prova( int nq ){
    n= nq;
    notasQuestoes = new double[n];
}

Prova :: ~Prova(){
    delete [] notasQuestoes;
}

void Prova::leNotas(){
    for(int i = 0; i <n; i++) cin >> notasQuestoes[i];
}

double Prova::obtemNotaFinal(){
    double sum = 0; int j=0;
    for(int i = 0; i <n; i++){
        sum+=notasQuestoes[i];
        if(notasQuestoes[i]<notasQuestoes[j]){
            j = i;
        }
    }    
    sum -= notasQuestoes[j];
    return sum;
}