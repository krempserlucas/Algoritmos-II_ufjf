#include <bits/stdc++.h>
using namespace std;

float** alocaMatriz(int m, int n){
    if(n<=0||m<=0) return NULL;
    float **mat = new float*[m];
    for(int i=0; i< m; i++){
        mat[i]= new float[n];
        for(int j=0; j<n; j++) mat[i][j]=0;
    }
    return mat;
}

int main(){
    int m, n; 
    cin>>m>>n;
    float **mat;
    mat =  alocaMatriz(m , n);
    for(int i=0; i<n; i++) delete[] mat[i];
    delete [] mat;
    return 0;
}