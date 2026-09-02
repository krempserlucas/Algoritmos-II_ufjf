/*
Faça um programa que leia a ordem de uma matriz quadrada a partir do teclado.
Em seguida, aloque uma matriz dessa ordem e faça a leitura de seus elementos.
Ao final, imprima a matriz. Certifique-se de que toda
memoria é apropriadamente desalocada ao final do programa (na sequência correta). 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int **mat = new int*[n];

    for(int i =0; i<n; i++)
        *(mat+i) = new int[n];
    
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin>> *(*(mat+i)+j);
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<*(*(mat+i)+j) <<" ";
        cout<<endl;
    }

    for(int i=0; i<n; i++) 
        delete [] *(mat+i);
    delete [] mat;
    return 0;
}

// OBS: *(*(mat+i)+j) == mat[i][j]