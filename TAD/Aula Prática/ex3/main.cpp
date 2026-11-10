#include <bits/stdc++.h> 
#include "Prova.h"
using namespace std;

int main(){
    Prova Enem(9);
    Enem.leNotas();
    cout<< Enem.obtemNotaFinal() << endl;
    return 0;
}