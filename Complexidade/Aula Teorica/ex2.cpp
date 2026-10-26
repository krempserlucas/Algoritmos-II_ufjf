/*
Faça um algoritmo para somar duas matrizes quadradas
M1 e M2 de ordens n1 e n2, respectivamente. A soma só
deve ser realizada se n1 for igual a n2. Analise o algoritmo
e calcule a soma das frequências para os diferentes fluxos
de execução possíveis.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

  int n1,n2,x; //1
  cin>>n1>>n2; //1
  if(n1 != n2) //1
    return 0;  //1
  int M1[n1][n1], M2[n2][n2]; //1

  for(int i=0; i<n1; i++)   // n+1
    for(int j=0; j<n1; j++) // (n+1) vezes n
      cin>>M1[i][j]; // n elavado a n

  for(int i=0; i<n2; i++)    // n+1 
    for(int j=0; j<n2; j++){ // (n+1) vezes n
      cin>>x; //n²                   
      M2[i][j] = x + M1[i][j]; //n elavado a n
    }

  for(int i=0; i<n2; i++){  // n+1
    for(int j=0; j<n2; j++) // (n+1) vezes n
      cout<<M2[i][j]<< " "; //n elavado a n
    cout<<endl; //n
  }
  return 0;
}
/*Se n1 é diferente de n2: 4
*/